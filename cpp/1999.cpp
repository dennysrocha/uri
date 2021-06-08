#include <iostream>
#include <cmath>

using namespace std;

int solve(int N) {
    int counter = 0;
    for(int c=0; c<=sqrt(N/3); c++) {
        for(int b=1; b<=sqrt(N); b++) {
            if(b>=c) {
                //cout << "Testing (b, c) = (" << b << ", " << c << ")" << endl;
                double a;
                a = 1.0*(N - b*c)/(b + c);
                if(a>=b && a == trunc(a)) {
                    counter++;
                    //cout << "Case #" << counter << ": (" << a << ", " << b << ", " << c << ")" << endl;
                }
            }
        }
    }
    return counter;
}



int main() {
    int N;
    while(cin >> N) {
        if(N == -1) return 0;
        cout << solve(N) << endl;
    }
    return 0;
}

/*

if a solution is (a, b, c), then:
ab + bc + ac = N, a>=b>=c

1) ab <= N, ab >= bb --> bb <= N --> b <= sqrt(N)

2) ab + bc + ac >= 3c^2 --> N >= 3c^2 --> c <= sqrt(N/3)

3) b, c fixed --> a = (N - bc)/(b + c) if a == trunc(a)


*/