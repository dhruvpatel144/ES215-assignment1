#include<iostream>
using namespace std;


int main() {
    unsigned long long a = 0;
    unsigned long long b = 1;

    for(int i = 2; i < 100; i++) {
        unsigned long long c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
return 0;
}
