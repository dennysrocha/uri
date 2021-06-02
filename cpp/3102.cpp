#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    cout.precision(3);
    int N;
    int X1, Y1, X2, Y2, X3, Y3;
    double a, b, c, p, res;
    cin >> N;
    while(N--) {
        cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;
        a = sqrt(pow((X1 - X2), 2) + pow((Y1 - Y2), 2));
        b = sqrt(pow((X2 - X3), 2) + pow((Y2 - Y3), 2));
        c = sqrt(pow((X1 - X3), 2) + pow((Y1 - Y3), 2));
        p = (a+b+c)/2;
        res = sqrt(p*(p-a)*(p-b)*(p-c));
        cout << fixed << res << endl;
    }
    return 0;
}