#include <iostream>

using namespace std;
#define K 0.69282032302

int main() {
    int l;
    while(cin >> l) printf("%.2f\n", l*l*K);
    return 0;
}

/*

convention: S denotes surface area, E denotes number of edges, L denotes length of each edge
initial triangle:   E0 = 4^0*3,     L0 = l/3^0,     S0 = A
first mutation:     E1 = 4^1*3,     L1 = l/3^1,     S1 = S0   + E0*[(L1/l)^2]*A
second mutation:    E2 = 4^2*3,     L2 = l/3^2,     S2 = S1   + E1*[(L2/l)^2]*A 
third mutation:     E3 = 4^3*3,     L3 = l/3^3,     S3 = S2   + E2*[(L3/l)^2]*A
fourth mutation:    E4 = 4^4*3,     L4 = l/3^4,     S4 = S3   + E4*[(L4/l)^2]*A
...
N-th mutation:      En = 4^n*3,     Ln = l/3^n,     Sn = Sn-1 + En*[(Ln/l)^2]*A

sum of all lines:
Sn  = A + (A/l^2)*[4^0*3 * (l/3^1)^2 + 4^1*3 * (l/3^2)^2 + ...]
    = A + 3*A*[4^0*3^-2 + 4^1*3^-4 + ...]
    = A + 3*A*PG(first = 1/9, r = 4/9)
    = A + 3*A*(1/5)
    = A + 3A/5
    = 8A/5 = (l^2)*(2*sqrt3)/5
calling K = 2*sqrt3/5:
    = l*l*K
*/