#include<iostream>
#include<string>
using namespace std;

int main() {
  int n;
  string S;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> S;
    if (S == "insert")
      insert()
    if (S == "find")
      cout << find() << endl;
  }

  return 0;
}
