#include <iostream>
#include <cmath>

using namespace std;

// check this amazing video https://bit.ly/3c4FmKV... be happy :P
void quickSort(int T[], int left, int right) {
    int i, j, pivot, aux;
    i = left;
    j = right-1;
    // cout << ((left+right)>>1) << endl;
    pivot = T[(left+right)>>1];
    while(i <= j) {
        while(T[i] > pivot && j < right) i++;
        while(T[j] < pivot && j > left) j--;
        if(i <= j) {
            aux = T[i];
            T[i] = T[j];
            T[j] = aux;
            i++;
            j--;
        }
    }
    if(j > left) quickSort(T, left, j+1);
    if(i < right) quickSort(T, i, right);
}

int main() {
    int N, res, days;
    cin >> N;
    int T[N];
    for(int i=0; i<N; i++) cin >> T[i];
    quickSort(T, 0, N);
    res = 0;
    for(int i=0; i<N; i++) {
        days = T[i] + (i+1) + 1;
        if(res < days) res = days;
    }
    cout << res << endl;
    // cout << res + counter << endl;
}