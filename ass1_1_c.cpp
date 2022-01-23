#include <bits/stdc++.h>
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

    clock_t start, end;
  
    start = clock();
  
    unsigned long long A[100];
    for(int j=0;j<100;j++){
        A[j]=-1;
    }
    A[0]=0;
    A[1]=1;
    for(int i = 1; i <= 100; i++) {
        cout << fibonacci(i, A) << endl;
    }
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    
return 0;
}