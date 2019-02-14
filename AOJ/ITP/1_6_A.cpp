#include <iostream>
using namespace std;
 
int main() {
    int N, A[100];
 
    cin >> N;
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }
 
    for (int i = 0; i < N; i++) {
      cout << A[N - i - 1];
      if (i != N - 1) cout << " ";
      else cout << "";
 
    }
    cout << endl;
    return 0;
}
