#include <stdio.h>
#include <math.h>

/* A number N can be written as N = p1^e1 * p2^e2 * p3^e3 * ... * pk^ek, which
form is called "prime factorization" of N. The number of divisors of N is thus d(N) = prod(ej+1), j from 1 to k.
The only way where d(N) is odd is when (ej+1) is odd for all j, which occurs when ej is even for all j.
If all ej is even, then we can write N as: N = (p1^(e1/2) * p2^(e2/2) * ... * pk^(ek/2))^2, and then we
see that N is a perfect square...
The problem resumes to print all perfect squares between 1 and N, both included.
*/

int main() {
    int N;
    while(scanf("%d", &N)) {
        if(N==0) {
            return 0;
        }
        printf("1");
        for(int k = 2; k <= sqrt(N); k++) {
            printf(" %d", k*k);
        }
        printf("\n");
    }
    return 0;
}