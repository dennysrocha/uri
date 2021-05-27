#include <iostream>

using namespace std;

int main() {
    int N;
    int counter = 0;
    while(cin >> N) {
        if(N==-1) return 0;
        counter++;
        cout << "Experiment " << counter << ": " << (N>>1) << " full cycle(s)" << endl;
    }
    return 0;
}