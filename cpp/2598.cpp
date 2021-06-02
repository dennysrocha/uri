#include <iostream>
 
using namespace std;
 
int main() {
    int C;
    long long N, M;
    cin >> C;
    while(C--) {
        cin >> N >> M;
        N = (N+(M-1))/M;
        cout << N << endl;
    }
    return 0;
}