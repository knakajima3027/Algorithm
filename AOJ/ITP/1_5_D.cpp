#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int N, j;
 
    cin >> N;
 
    for (int i = 1; i <= N; i++) {
      j = i;
      if (j%3 == 0) cout << " " << i;
 
      else {
        while (j) {
          if (j%10 == 3) {
            cout << " " << i;
            break;
          }
 
          j /= 10;
        }
      }
    }
    cout << endl;
 
    return 0;
}
