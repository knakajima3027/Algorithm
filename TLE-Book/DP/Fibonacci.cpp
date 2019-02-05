#include<iostream>

using namespace std;

int F[100];

int Fibonacci(int n) {
  F[0] = 1;
  F[1] = 1;

  for (int i = 2; i < n; i++) {
    F[i] = F[i-1] + F[i-2];
  }

  return F[n-1];
}

int main() {
  int n;

  cin >> n;

  cout << Fibonacci(n) << endl;

  return 0;
}
