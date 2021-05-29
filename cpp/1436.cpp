#include <iostream>

using namespace std;

int main() {
    int T, N, mid, res;
    int counter = 0;
    cin >> T;
    while(T--) {
        counter++;
        cin >> N;
        mid = N/2 + 1;
        for(int i=1; i<=mid; i++) {
            cin >> res;
        }
        for(int i=mid+1; i<=N; i++) {
            cin >> mid; // just to discard the post numbers
        }
        cout << "Case " << counter << ": " << res << endl;
    }
    return 0;
}