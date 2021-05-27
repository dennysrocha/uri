#include <iostream>
#include <math.h>

using namespace std;

#define PI 3.141592654

double solve(double A, double B, double C) {
    return 5*(B*tan(A*PI/180.0) + C);
}

int main() {
    double A, B, C;
    while(cin >> A >> B >> C) {
        printf("%.2f\n", solve(A, B, C));
    }
}