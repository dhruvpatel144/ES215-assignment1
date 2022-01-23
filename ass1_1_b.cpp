#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main() {

    clock_t start, end;
  
    start = clock();
  

    unsigned long long a = 0;
    unsigned long long b = 1;

    for(int i = 2; i < 100; i++) {
        unsigned long long c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }

    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
return 0;
}
