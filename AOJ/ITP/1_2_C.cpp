#include<iostream>
#include<algorithm>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
 
int main() {
    int R[3];
 
    REP(i,3) cin >> R[i];
 
    sort(R, R+3);
 
    REP(i,3) {
        cout << R[i];
        if (i != 2) cout << " ";
    }
 
    cout << endl;
     
    return 0;
}
