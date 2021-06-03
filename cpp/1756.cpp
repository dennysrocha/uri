#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int T, N, Y;
    double P;
    cin >> T;
    while(T--) {
        double res12 = 1;
        double res21 = 1;
        double res;
        cin >> N >> Y >> P;
        //cout << N << Y << P << endl;
        //char p1[N], p2[N], p3[N], p12[N], p21[N];
        string p1, p2, p3, p12, p21;
        cin >> p1 >> p2 >> p3;
        for(int i=0; i<Y; i++) {
            p12[i] = p1[i];
            if(p12[i] != p3[i]) res12 *= P;
            else res12 *= 1-P;
            p21[i] = p2[i];
            if(p21[i] != p3[i]) res21 *= P;
            else res21 *= 1-P;
        }
        for(int i=Y; i<N; i++) {
            p12[i] = p2[i];
            if(p12[i] != p3[i]) res12 *= P;
            else res12 *= 1-P;
            p21[i] = p1[i];
            if(p21[i] != p3[i]) res21 *= P;
            else res21 *= 1-P;
        }
        p12[N] = '\0';
        p21[N] = '\0';

        res = res12 + res21 - res12*res21;
        cout.precision(7);
        cout << fixed << res << endl;
    }
    return 0;
}