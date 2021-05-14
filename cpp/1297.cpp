#include <iostream>
#include <cmath>

using namespace std;

int W, D, A, K;
int P1[9], Q1[9], P2[9], Q2[9];

double f(int p[9], int q[9], double x) {
    double num = 0, den = 0;
    for(int i=K; i>=0; i--) {
        num = num*x + 1.0*p[i];
        den = den*x + 1.0*q[i];
    }
    return num/den;
}

double findDepth() {
    double area;
    double x;
    double min = -1.0*D;
    double max = 0;
    double depth = (min+max)/2;
    int steps = 1000*W;
    double dx = (1.0*W)/steps;
    double f1, f11, f111, f2, f22, f222;
    while(true) {
        area = 0;
        x = 0;
        for(int i=0; i < steps; i++) {
            f1 = f(P1, Q1, x);
            // here we gonna use Simpson's 1/3 rule to find integral's approximately value:
            // int_{a}^{b} f(x)dx ~= ((b-a)/6)[f(a) + 4f((a+b)/2) + f(b)]
            f11 = f(P1, Q1, x+dx/2);
            f111 = f(P1, Q1, x+dx);
            f2 = f(P2, Q2, x);
            f22 = f(P2, Q2, x+dx/2);
            f222 = f(P2, Q2, x+dx);
            if(f2 >= depth) {
                area += ((f1 + 4*f11 + f111)/6 - (f2 + 4*f22 + f222)/6)*dx;
            }
            else if(f1 >= depth) {
                area += ((f1 + 4*f11 + f111)/6 - depth)*dx;
            }
            x += dx;
        }
        if(abs(area - 1.0*A) <= 0.0000001) {
            return -depth;
        }
        else if(area<=1.0*A) {
            max = depth;
        }
        else {
            min = depth;
        }
        depth = (min+max)/2;
    }
}

int main() {
    bool flag = true;
    while(cin>>W>>D>>A>>K) {
        if(flag == false) {
            printf("\n");
        }
        flag = false;
        for(int i=0; i<K+1; i++) {
            cin >> P1[i];
        }
        for(int i=0; i<K+1; i++) {
            cin >> Q1[i];
        }
        for(int i=0; i<K+1; i++) {
            cin >> P2[i];
        }
        for(int i=0; i<K+1; i++) {
            cin >> Q2[i];
        }
        printf("%.5f", findDepth());
    }

    return 0;
}