#include<iostream>
using namespace std;

int Binary_Search(int S[], int key, int n) {
  int left = 0;
  int right = n;
  int mid;

  while (left < right) {
    mid = (left + right) / 2;
    if (S[mid] == key)
      return 1;
    else if (S[mid] > key)
      right = mid;
    else
      left = mid + 1;
  }

  return 0;
}

int main() {
  int result = 0;
  int n, q, key;
  int S[100000];

  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> S[i];

  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> key;
    result += Binary_Search(S, key, n);
  }

  cout << result << endl;

  return 0;
}
