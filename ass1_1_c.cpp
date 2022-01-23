#include<iostream>
using namespace std;


unsigned long long fibonacci(int n, unsigned long long A[]) {
    if(A[n-1]!=-1) {
        return A[n - 1];
    } 


    else {
        A[n - 1] = fibonacci(n - 1, A) + fibonacci(n - 2, A);
        return A[n - 1];
    }
}
int main() {
    unsigned long long A[100];
    for(int j=0;j<100;j++){
        A[j]=-1;
    }
    A[0]=0;
    A[1]=1;
    for(int i = 1; i <= 100; i++) {
        cout << fibonacci(i, A) << endl;
    }    
return 0;
}
