#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int N, M;
    while(cin >> N) {
        if(N == 0) return 0;
        int p[N], P[N];
        for(int i=0; i<N; i++) {
            cin >> p[i] >> P[i];
        }
        cin >> M;
        // for(int i=0; i<N; i++) cout << "preco[" << i << "] = " << p[i] << ", PESO[" << i << "] = " << P[i] << endl;
        int res[N+1][M+1];
        memset(res, 0, sizeof(res));
        for(int i=1; i<N+1; i++) {
            for(int j=1; j<M+1; j++) {
                if(P[i-1] > j) res[i][j] = res[i-1][j];
                else res[i][j] = max(res[i-1][j], res[i-1][j-P[i-1]] + p[i-1]);
            }
        }
        cout << res[N][M] << endl;
    }
    return 0;
}

/*

input example:
3
15 10
10 5
10 5
10
expected output:
20

input example:
3
100 3
200 6
300 9
12
expected output:
400
*/