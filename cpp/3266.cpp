#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double probability(double start, double end, double sigma) {
    double f;
    f = pow(M_E, -start*start/(2*sigma*sigma)) - pow(M_E, -end*end/(2*sigma*sigma));
    return f;
}

int main() {
    double bullEye, bull, tRingInt, tRingExt, dRingInt, dRingExt;
    double sigma;
    double res = 0;
    cin >> bullEye >> bull >> tRingInt >> tRingExt >> dRingInt >> dRingExt;
    cin >> sigma;
    
    res += 50.0*probability(0, bullEye, sigma);
    res += 25.0*probability(bullEye, bull, sigma);
    res += 10.5*probability(bull, tRingInt, sigma);
    res += 31.5*probability(tRingInt, tRingExt, sigma);
    res += 10.5*probability(tRingExt, dRingInt, sigma);
    res += 21.0*probability(dRingInt, dRingExt, sigma);
    
    double aux = 50;

    if(res<10) {
        cout.precision(9);
        cout << fixed << res << endl;
        cout << fixed << aux << endl;
    }
    else {
        cout.precision(8);
        cout << fixed << res << endl;
    }

    return 0;
}

/* first in this problem, note that we can use average values of the pizzas:

avg = 10.5

then all we need is to compute the sum of each probability:
P = integral of f(r)*2*pi*r dr, calling integral = int (you can use wolframalpha with the expression below):
  = (1/(2*pi*sigma^2)) * int(e^(-r^2/(2*sigma^2))*2*pi*r dr), r from A to B, sigma = input(),
  where A and B are the limits of each area
  
the integral results in:
P = -e^(-r^2/(2*sigma^2)) + C

finally, the expected value is the sum of all weight multiplied by the respective probability
*/