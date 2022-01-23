#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main() {

    clock_t start, end;
  
    start = clock();

    unsigned long long A[100];
    A[0] = 0;
    cout << A[0] << endl;
    A[1] = 1;
    cout << A[1] << endl;
    for(int i = 2; i < 100; i++) {
        A[i] = A[i- 1] + A [i- 2];
        cout << A[i] << endl;
    }
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    

return 0;
}