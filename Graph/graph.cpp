#include<iostream>
using namespace std;

int main() {
  int G[100][100];
  int n, k, v, l;

  cin >> n;
  for (int i = 0; i < n; i++) 
    for (int j = 0; j < n; j++)
      G[i][i] = 0;

  for (int i = 0; i < n; i++) {
    cin >> k >> v;
    for (int j = 0; j < v; j++) {
      cin >> l; 
      G[k - 1][l - 1] = 1; 
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << G[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
