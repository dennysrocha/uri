#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int f[1501];

// First, see that 0 < K < 10^(1M), then we can't use any data type like int, float, double, etc...
// Due to it, we will need to find a pattern to reduce k...
// See that when fib(k+1)%1000 == 1, fib(k+2) == 1, then the new sequence
// Starting at k will be the same as starting from 1...
// After some coding:
// 
// a, b = 1, 1
// k = 2
// while True:
//     a, b = b, a+b
//     if a%1000 == 1 and b%1000 == 1:
//         print(k-1)
//         break
//     k += 1
// 
// The result is k=1500

void fib() {
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;
    int a = 1;
    int b = 1;
    int c = 1;
    for(int i=3; i<1501; i++) {
        a = (c + b)%1000;
        f[i] = a;
        b = c;
        c = a;
    }
}

// In the same way, we can see that ABCDEFGHIJKLMNO % 1500 == (ABCDEFGHIJKLMNO % 9000)%1500 ==
// ... == (ABCDEFGHIJKL000 % 9000 + MNO)%1500 == ((ABCDEFGHIJKL % 9)*1000 + MNO)%1500
// Now we can use the property that ABCDEFGHIJKL % 9 == A+B+C+D+E+F+G+H+I+J+K+L % 10...
// Evertything become easy!
int treatInput(string& s) {
    int i=0;
    int count = 0;
    int sum = 0;
    int l1 = -1; // the last number
    int l2 = -1; // the next to last number
    int l3 = -1; // the next to next to last number

    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        l3 = l2;
        l2 = l1;
        l1 = *it-48;
        sum += l1;
        i++;
        count++;
    }
    if(count <= 3) {
        return stoi(s);
    }
    return (((sum-l1-l2-l3)%9)*1000 + (100*l3 + 10*l2 + l1))%1500; // ((ABCDEFGHIJKL % 9)*1000 + MNO)%1500
}

int main() {
    fib();
    int T;
    string str;
    cin >> T;
    while(T--) {
        cin >> str;
        printf("%03d\n", f[treatInput(str)]);
    }
    return 0;
}

