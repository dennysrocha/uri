#include <iostream>

using namespace std;

bool sieveTable[190000];
long long squaredPrimes[17170];

void sieveOfErastothenes() {
    long primePos = 0;
    for(long long i=2; i<190000; i+=1) {
        if(!sieveTable[i]) {
            sieveTable[i] = true;
            squaredPrimes[primePos] = i*i;
            primePos++;
            for(long long j=2*i; j<190000; j+=i) {
                sieveTable[j] = true;
            }
        }
    }
}

long long min(long long a, long long b) {
    return (a>b)? b : a;
}

long long numOfSquareFree(long long n, long long num, int pos) {
    if(squaredPrimes[pos] != 0 && n/num >= squaredPrimes[pos]) {
        return n/(num*squaredPrimes[pos]) + numOfSquareFree(n, num, pos+1) - numOfSquareFree(n, num*squaredPrimes[pos], pos+1);
    }
    else {
        return 0;
    }
}

long long itMiha(long long n) {
    long long lo, hi, me, res;
    lo = 10*n/8;
    hi = min(20*n/6, 40000000000);
    me = (lo + hi) >> 1;
    while(lo<hi) {
        res = me - numOfSquareFree(me, 1, 0);
        if(res >= n) {
            hi = me;
        }
        else {
            lo = me+1;
        }
        me = (lo+hi) >> 1;
    }
    return lo;
}

int main() {
    int T;
    long long N;
    sieveOfErastothenes();
    cin >> T;
    for(int i=0; i<T; i++) {
        cin >> N;
        cout << itMiha(N) << endl;
    }
}