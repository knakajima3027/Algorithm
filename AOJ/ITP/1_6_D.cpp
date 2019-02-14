#include<iostream>
 
using namespace std;
 
int main() {
  int n, m;
  int A[100][100], B[100], X[100];
 
  cin >> n >> m;
 
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> A[i][j];
 
  for (int j = 0; j < m; j++)
    cin >> B[j];
 
  for (int i = 0; i < n; i++)
    X[i] = 0;
 
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      X[i] += A[i][j] * B[j];
 
  for (int i = 0; i < n; i++)
    cout << X[i] << endl;
 
  return 0;
}
