#include <iostream>
 
using namespace std;

long long trib[100001]; 
 
long long tribonacci(int N) {
    trib[1] = 1;
    trib[2] = 2;
    trib[3] = 4;
    for(int i=4; i<=N; i++) {
        trib[i] = (trib[i-1] + trib[i-2] + trib[i-3])%1000000007LL;
    }
    return trib[N];
} 
 
int main() {
    int N;
    cin >> N;
    cout << tribonacci(N) << endl;
    return 0;
}