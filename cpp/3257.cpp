#include <iostream>

using namespace std;

int main() {
    int N, T, res, counter;
    res = -1;
    counter = 1;
    cin >> N;
    while(N--) {
        cin >> T;
        if(T==res) counter++;
        else if(T>res) {
            res = T;
            counter = 1;
        }
    }
    cout << res + counter << endl;
}