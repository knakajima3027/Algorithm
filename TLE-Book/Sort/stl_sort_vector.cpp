#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
  int n, x;
  vector<int> V;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    V.push_back(x);
  }

  sort(V.begin(), V.end());

  for (int i = 0; i < V.size(); i++)
    cout << V[i] << " ";

  cout << endl;

  return 0;
}
