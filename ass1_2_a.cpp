#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    clock_t start, end;
  
    start = clock();
    int n;
    cin >> n;
    int M1[n][n];
    int M2[n][n];
    int M[n][n];
    for (int i = 0; i < n; i++){
        
        for (int j = 0; j < n; j++){
            
            M1[i][j] = rand() % 10;
            M2[i][j] = rand() % 10;
        }
    }
 
    for (int i = 0; i < n; i++){
        
        for (int j = 0; j < n; j++){
            
            int p = 0;
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