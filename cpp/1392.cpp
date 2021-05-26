#include <iostream>

using namespace std;

long lwh(long A) {
    if(A <= 200) return A/2; // limit is 2*100
    else if(A <= 29900) return (A-200)/3 + 100; // limit is 2*100 + 3*9900
    else if(A <= 4979900) return (A-29900)/5 + 10000; // limit is 2*100 + 3*9900 + 5*990000
    else return (A-4979900)/7 + 1000000;
}

long price(long LWh) {
    if(LWh <= 100) return 2*LWh;
    else if(LWh <= 10000) return 3*(LWh-100) + 200;
    else if(LWh <= 1000000) return 5*(LWh-10000) + 29900;
    else return 7*(LWh-1000000) + 4979900;
}

long solve(long A, long B) {
    long hi, lo, me, K;
    lo = 0; hi = A;
    K = lwh(A);
    long res;
    me = (lo+hi) >> 1;
    while(lo<hi) {
        res = price(K - lwh(me)) - B;
        if(res == me) {
            return me;
        }
        else if(res < me) {
            hi = me;
        }
        else {
            lo = me+1;
        }
        me = (lo+hi) >> 1;
    }
    return lo;
}


// my = my LWh consumption, ne = neighbour's LWh consumption
// my + ne = lwh(A)  -->  ne = lwh(A) - my
// price(ne) - price(my) = B  -->  price(ne) = price(my) + B
// price(lwh(A) - my) = price(my) + B
// therefore price(my) = price(lwh(A) - my) - B
// calling K = lwh(A):
// price(my) = price(K - my) - B

// test with 999999996 988020108 should return 4979895

int main() {
    long A, B;
    long my;
    while(cin >> A >> B) {
        if(A == 0 && B == 0) {
            return 0;
        }
        cout << solve(A, B) << endl;
    }
}