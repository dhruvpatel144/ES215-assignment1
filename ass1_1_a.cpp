#include<iostream>
using namespace std;


unsigned long long fib(int n) {
    if(n == 1 || n == 2) {
        return n - 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}
int main() {
    
    for(int i = 1; i <= 100; i++) {
        cout << fib(i) << endl;
    }
    return 0;
}
