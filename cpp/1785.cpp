#include <iostream>

using namespace std;

int sort(int X, bool inverse) {
    while(X<1000) X *= 10;
    int d1, d2, d3, d4;
    int res = 0;
    d1 = X%10;
    d2 = X%100;
    d3 = X%1000;
    d4 = X%10000;
    int aux[4] = {d1, (d2-d1)/10, (d3-d2)/100, (d4-d3)/1000};
    if(inverse) {
        for(int i=3; i>0; i--) {
            for(int j=0; j<i; j++) {
                if(aux[j] > aux[j+1]) swap(aux[j], aux[j+1]);
            }
        }
    }
    else {
        for(int i=3; i>0; i--) {
            for(int j=0; j<i; j++) {
                if(aux[j] < aux[j+1]) swap(aux[j], aux[j+1]);
            }
        }
    }
    for(int i=0; i<4; i++) res = 10*res + aux[i];
    return res;
}

int maior_numero_com_digitos_de(int X) {
    return sort(X, false);
}

int menor_numero_com_digitos_de(int X) {
    return sort(X, true);
}

int kaprekar(int X) {
    int cnt = 0;
    while(X != 6174) {
        if(!X) return -1;
        int maior = maior_numero_com_digitos_de(X);
        int menor = menor_numero_com_digitos_de(X);
        X = maior - menor;
        cnt++;
    }
    return cnt;
}

int main() {
    int T, X;
    // while(true) {
    //     cin >> X;
    //     cout << "menor: " << sort(X, true) << endl;
    //     cout << "maior: " << sort(X, false) << endl;
    // }
    cin >> T;
    for(int i=1; i<=T; i++) {
        cin >> X;
        cout << "Caso #" << i << ": " << kaprekar(X) << endl;
    }
    return 0;
}