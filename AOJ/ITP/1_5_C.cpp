#include <iostream>
#include <algorithm>
#define REP(i,n) for (int i = 0; i < n; i++)
using namespace std;
 
int main() {
    int W, H, R[1000][1000], count = 0;
    while (true) { 
        cin >> H >> W;
        if (H == 0 && W == 0) break;
        R[count][0] = W;
        R[count][1] = H;
        count++;
    }
     
    REP(i,count) {
        for (int j = 0; j < R[i][1]; j++) {
            for ( int k = 0; k < R[i][0]; k++) {
                if ((j + k)%2 == 0) cout << '#';
                else cout << '.';
            }
            cout <<endl;
        }
        cout << endl;
    }
}
