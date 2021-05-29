#include <iostream>

using namespace std;

int main() {
    double P, T, res;
    cin >> P >> T;
    res = P*T/2.0;
    cout.precision(5);
    cout << "Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = ";
    cout << fixed << res << "." << endl;
    return 0;
}

// what's the purpose of this question? :-s