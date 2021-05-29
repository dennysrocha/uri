#include <iostream>

using namespace std;

#define MOD 1000000007

int fib(int n) {
    int f[n+1];
    f[1] = 0;
    f[2] = 1;
    f[3] = 1;
    for(int i=4; i<=n; i++) {
        f[i] = (f[i-2] + f[i-3])%MOD;
    }
    return f[n];
}

int main() {
    int N, res;
    cin >> N;
    res = fib(N-1);
    cout << res << endl;
    return 0;
}


/* 
    To solve the problem, we can think in how to tile a 1xN rectangle using 1x2 and 1x3 rectangles...
     __ __ __ __ __ __ __ __     __ __ __ __ __ __ __ __ __
    |__|__|__|__|__|__|__|__|...|__|__|__|__|__|__|__|__|__|

    If the last rectangle is 1x2:
     __ __ __ __ __ __ __ __     __ __ __ __ __ __ __     __ __
    |__|__|__|__|__|__|__|__|...|__|__|__|__|__|__|__| + |__|__|

    The solution in this case is F(N-2).

    If the last rectangle is 1x3:
     __ __ __ __ __ __ __ __     __ __ __ __ __ __     __ __ __
    |__|__|__|__|__|__|__|__|...|__|__|__|__|__|__| + |__|__|__|

    The solution in this case if F(N-3).

    Then we can conclude that F(N) = F(N-2) + F(N-3)

*/

