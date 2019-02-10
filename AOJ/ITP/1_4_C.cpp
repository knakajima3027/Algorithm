#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    int i = 0, a, b, R[1000000];
    char op;
 
    while (true) {
        cin >> a >> op >> b;
         
        if (op == '+') R[i] = a + b;
        else if (op == '-') R[i] = a - b;
        else if (op == '*') R[i] = a * b;
        else if (op == '/') R[i] = a/b;
        else break;
        i++;
 
    }
       
    for (int j = 0; j < i; j++) cout << R[j] << endl;
    return 0;
 
}
