#include <iostream>

using namespace std;

#define REFVALUE 3000000

int main() {
    int N, B, H, W, aux;
    cin >> N >> B >> H >> W;
    int res = REFVALUE;
    int P, A;
    for(int i=0; i<H; i++) {
        cin >> P;
        for(int j=1; j<=W; j++) {
            cin >> A;
            if(A>=N) {
                aux = N*P;
                if(aux<=B) res = min(res, aux);
            }
        }
    }
    if(res == REFVALUE) cout << "stay home" << endl;
    else cout << res << endl;
    return 0;
}