//STL スタックの使用例
#include<iostream>
#include<stack>
using namespace std;

int main() {
  stack<int> S;

  S.push(3); //スタックに3を積む
  S.push(5); //スタックに5を積む
  S.push(8); //スタックに8を積む
  cout << "スタックサイズ: " << S.size() << endl; //スタックのサイズを表示
  cout << "一番上: " << S.top() << endl; //スタックの一番上の数字(8)

  S.pop(); //スタックの一番上の要素を削除
  cout << "一番上: " << S.top() << endl; //スタックの一番上の数字(5)

  S.pop(); //スタックの一番上の要素を削除
  cout << "一番上: " << S.top() << endl; //スタックの一番上の数字(3)

  return 0;
}
