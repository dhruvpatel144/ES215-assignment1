#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    clock_t start, end;
  
    start = clock();
    int n;
    cin >> n;
    double M1[n][n];
    double M2[n][n];
    double M[n][n];
    for (int i = 0; i < n; i++){
        
        for (int j = 0; j < n; j++){
            
            M1[i][j] = (double)(rand() / RAND_MAX * 10);
            M2[i][j] = (double)(rand() / RAND_MAX * 10);
        }
    }
 
    for (int i = 0; i < n; i++){
        
        for (int j = 0; j < n; j++){
            
            double p = 0;
            for (int k = 0; k < n; k++){
               
                p += M1[i][k] * M2[k][j];
            }
            M[i][j] = p;
        }
    }
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}