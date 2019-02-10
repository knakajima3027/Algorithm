#include<iostream>
using namespace std;
 
int main() {
    int A, B;
 
    cin >> A >> B;        
    printf("%d %d %5f\n", A/B , A%B, double(A)/double(B));
    return 0;
} 
