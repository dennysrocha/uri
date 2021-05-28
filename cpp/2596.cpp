#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int C, N, sq; // sq = sqrt(N) is the number of perfect squares in [1,N]
    cin >> C;
    while(C--) { 
        cin >> N;
        sq = sqrt(N);
        cout << N-sq << endl;
    }
    return 0;
}

/* note that a number N can be written as N = p1^e1 * p2^e2 * ... pn^en
and its number of divisors d(N) = (e1+1)*(e2+1)*...(en+1)
note that d(N) is odd only if e1, e2, ..., en are even!
if all the expoents are even, N is a perfect square */