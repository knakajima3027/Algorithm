#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int Longest(string x, string y) {
  int L[1001][1001];
  int maxl = 0;
  int xlen = x.size();
  int ylen = y.size();

  x = ' ' + x;
  y = ' ' + y;

  for (int i = 1; i <= xlen; i++) L[i][0] = 0;
  for (int j = 1; j <= ylen; j++) L[0][j] = 0;

  for (int i = 1; i <= xlen; i++) {
    for (int j = 1; j <= ylen; j++) {
      if (x[i] == y[j])
        L[i][j] = L[i-1][j-1] + 1;
      else
        L[i][j] = max(L[i][j-1], L[i-1][j]);

      maxl = max(maxl, L[i][j]);
    }
  }

  return maxl;
}

int main() {
  string X, Y;
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> X;
    cin >> Y;
    cout << Longest(X, Y) << endl;
  }

  return 0;
}
