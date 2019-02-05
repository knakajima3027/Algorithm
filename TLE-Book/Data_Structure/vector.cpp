//STL 動的配列の使用例
#include<iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> V;

  V.push_back(1); //配列の末尾に要素を追加
  for (int i = 0; i < V.size(); i++)
    cout << V[i] << " ";
  cout << endl;

  V.push_back(2);
  for (int i = 0; i < V.size(); i++)
    cout << V[i] << " ";
  cout << endl;

  V.push_back(3);
  for (int i = 0; i < V.size(); i++)
    cout << V[i] << " ";
  cout << endl;

  V.insert(V.begin() + 1, 5); //V.insert(a, b) a番目に要素bを挿入
  for (int i = 0; i < V.size(); i++)
    cout << V[i] << " ";
  cout << endl;

  V.erase(V.begin() + 2); // V.erase(n) n番目の要素を削除
  for (int i = 0; i < V.size(); i++)
    cout << V[i] << " ";
  cout << endl;

  return 0;
}
