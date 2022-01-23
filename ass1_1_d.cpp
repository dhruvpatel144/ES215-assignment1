
#include<iostream>
using namespace std;


int main() {
    unsigned long long A[100];
    A[0] = 0;
    cout << A[0] << endl;
    A[1] = 1;
    cout << A[1] << endl;
    for(int i = 2; i < 100; i++) {
        A[i] = A[i- 1] + A [i- 2];
        cout << A[i] << endl;
    }
return 0;
}
