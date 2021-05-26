#include <iostream>

using namespace std;

bool sieve[1100];
int primes[1100];
int twinPrimes[1100];

void sieveOfErastothenes() {
    sieve[0] = true;
    sieve[1] = true;
    int pos1 = 0;
    int pos2 = 0;
    for(int i=2; i<1100; i++) {
        if(!sieve[i]) {
            sieve[i] = true;
            primes[pos1] = i;
            if(pos1 > 0 && primes[pos1]-2 == primes[pos1-1]) {
                twinPrimes[pos2] = primes[pos1];
                pos2++;
            }
            pos1++;
            for(int j=i; j<1100; j+=i) {
                sieve[j] = true;
            }
        }
    }
}

// 168 primos ate 1000

int main() {
    sieveOfErastothenes();
    int N, i;
    cin >> N;
    i=0;
    while(N>=twinPrimes[i]) i++;
    i = twinPrimes[i-1];
    cout << i-2 << " " << i << endl;
    return 0;
}