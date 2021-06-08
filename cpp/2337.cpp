#include <iostream>

using namespace std;
long long fibonacci[43];
long long exp2[41];

void fib() {
    fibonacci[0] = 0LL;
    fibonacci[1] = 1LL;
    for(int i=2; i<43; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
}

void exponentBase2() {
    exp2[0] = 1LL;
    for(int i=1; i<41; i++) exp2[i] = 2*exp2[i-1];

}

long long gcd(long long a, long long b) {
    long long val = a%b;
    if(val==0) return b;
    return gcd(b, val);
}

void proHabilidade(int N) {
    long long num = fibonacci[N+2];
    long long den = exp2[N];
    long long common = gcd(den, num);
    num /= common;
    den /= common;
    cout << num << "/" << den << endl;
}

int main() {
    fib();
    exponentBase2();
    int N;
    while(cin >> N) {
        proHabilidade(N);
    }
    return 0;
}


/*

the objective is to calculate the number of ways to fill the N spaces (_) without 2 consecutives tails...
suppose N = 5: f(N) = _ _ _ _ _ 

we can divide the cases in 2:

1) the last one space is head:
case1 = _ _ _ _ + H
we can fill the 4 other spaces in f(N-1) ways


2) the last one is tail, therefore the previous last is head:
case2 = _ _ _ + H T
we can fill the 3 other spaces in f(N-2) ways

obviously f(N) = case1 + case2
--> f(N) = f(N-1) + f(N-2) --> fibonacci series

to find probability, note that we can choose the N values in 2^N ways :)

res = fib(N)/2^N, where f(1) = 2, f(2) = 3

*/