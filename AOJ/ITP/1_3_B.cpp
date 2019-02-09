#include<iostream>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
 
int main() {
    int R[10000], cnt = 0;
    REP(i, 10000) {
        cin >> R[i];
        if (R[i] == 0) break;
        cnt ++;
    }
 
    REP(i, cnt) {
        cout << "Case " << i+1 << ": " << R[i] << endl;        
    }
     
    return 0;
}
