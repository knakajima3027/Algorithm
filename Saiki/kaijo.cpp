#include<iostream>

using namespace std;

int saiki(int n) {
  if (n == 1)
    return 1;

  else
    return saiki(n-1) * n;

 }
int main() {
  int n, res;

  cin >> n;

  res = saiki(n);

  cout << res << endl;
  return 0;
}
