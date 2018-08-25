#include<iostream>
#include<algorithm>
using namespace std;

int main() {
  int V[5];

  for (int i = 0; i < 5; i++)
    cin >> V[i];

  sort(V, V+5);

  for (int i = 0; i < 5; i++)
    cout << V[i] << " ";

  cout << endl;
  
  return 0;
}
