#include <iostream>

using namespace std;

//  attemp to not find time in hours... it can generate wrong approximations in output
int hmsToH(int h, int m, int s) {
    return 3600*h + 60*m + s;
}

int main() {
    int h, m, s;
    double t, t0, v, d;
    t = 0;
    t0 = 0;
    v = 0;
    d = 0;
    char temp;
    while(scanf("%d:%d:%d", &h, &m, &s) != EOF) {
        scanf("%c", &temp);
        if(temp=='\n') {
            t0 = t;
            t = hmsToH(h, m, s);
            d += v*(t - t0)/3600;
            printf("%02d:%02d:%02d %.2lf km\n", h, m, s, d);
        }
        else {
            t0 = t;
            t = hmsToH(h, m, s);
            d += v*(t - t0)/3600;
            scanf("%lf", &v);
        }
    }
}