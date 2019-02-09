#include<iostream>
#include<algorithm>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
 
int main() {
    int R[3000][2];
    int cnt = 0;
 
    REP(i, 10000) {
        cin >> R[i][0] >> R[i][1];
        if (R[i][0] == 0 && R[i][1] == 0) break;
        cnt += 1;
    }
 
    REP(i, cnt) {
        sort(R[i], R[i] + 2);
        cout << R[i][0] << " " << R[i][1] << endl;
         
    }
     
    return 0;
 
}
