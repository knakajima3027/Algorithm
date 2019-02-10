#include <iostream>
#include <algorithm>
#include <math.h>
#define REP(i,n) for (int i = 0; i < n; i++)
using namespace std;
 
int main() {
    int n, R[10001], max = -10000001, min = 10000001;
    long long sum = 0;
 
    cin >> n;
    REP(i, n) cin >> R[i];
 
    REP(i, n) {
        if (fmax(max, R[i]) == R[i]) max = R[i];
        if (fmin(min, R[i]) == R[i]) min = R[i];
        sum = sum + R[i];
     }  
    cout << min << " " << max << " " << sum << endl;
    return 0;
 
}
