#include <iostream>

using namespace std;

#define MAX_NUM_PRIME 60101

// the 6058th prime is 60013, the first higher than 60000
// the 6067th prime is 60101, the maximum number that we need to compute

bool sieve[MAX_NUM_PRIME];

int sieveOfErastothenesModif(int P) {
    int pos = 1;
    int sum = 0;
    int i = 2;
    while(pos < 11) {
        if(!sieve[i]) {
            sieve[i] = true;
            if(i>=P) {
                sum += i;
                pos++;
            }
            for(int j=i; j<min(MAX_NUM_PRIME+1, 2*P); j+=i) {
                sieve[j] = true;
            }
        }
        i++;
    }
    return sum;
}

int main() {
    int P, res;
    cin >> P;
    res = sieveOfErastothenesModif(P);
    cout << res << " km/h" << endl;
    res = 60000000/res;
    cout << res << " h / ";
    res /= 24;
    cout << res << " d" << endl;
    return 0;
}