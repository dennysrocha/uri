#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long K, aux;
    cin >> K;
    if(K==1) cout << 0 << endl;
    else {
        aux = (long long)(81*pow(10, K-2) - 9*pow(10, (K+1)/2 - 1)) >> 1;
        cout << aux << endl; 
    }
    return 0;
}