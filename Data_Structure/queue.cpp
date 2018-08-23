//STL キューの使用例
#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
  queue<string> Q;

  Q.push("red");
  Q.push("blue");
  Q.push("yellow");
  Q.push("yellow");

  cout << "一番出口に近い要素(先頭): " << Q.front() << endl;
  cout << "キューに入っている要素数: " << Q.size() << endl;

  Q.pop(); //先頭要素の削除
  cout << "新たな先頭: " << Q.front() << endl;
  cout << "新たなサイズ: " << Q.size() << endl;

  return 0;

}
