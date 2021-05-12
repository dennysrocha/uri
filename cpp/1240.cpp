#include <iostream>
#include <string>
using namespace std;

int main () {
    int N;
    string A, B;
    int lenA, lenB;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> A >> B;
        lenA = A.length();
        lenB = B.length();
        if (lenA < lenB) {
            cout << "nao encaixa" << endl;
        }
        else {
            bool flag = true;
            for (int j=lenA - lenB; j<lenA; j++) {
                //cout << A[j];
                if (A[j] != B[j-lenA+lenB]) {
                    flag = false;
                }
            }
            cout << (flag ? "encaixa" : "nao encaixa") << endl;
        }
    }
    return 0;
}