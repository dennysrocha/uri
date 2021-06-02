#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int R, W, L;
    int counter = 0;
    while(cin >> R) {
        if(R==0) return 0;
        cin >> W >> L;
        counter++;
        if(R>=sqrt(((1.0*W)*W)/4 + ((1.0*L)*L)/4)) {
            cout << "Pizza " << counter << " fits on the table." << endl;
        }
        else {
            cout << "Pizza " << counter << " does not fit on the table." << endl;
        }
    }
    return 0;
}