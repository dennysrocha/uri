#include <iostream>

using namespace std;

int A[100][100];
int B[100][100];

void showMe(int matrix[100][100], int R, int C) {
    for(int i=0; i<R; i++) {
        for(int j=0; j<C-1; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << matrix[i][C-1] << endl;
    }
}

void conquer(int A[100][100], int B[100][100], int R, int C, int N, int K) {
    // // check (i-1, j), (i+1, j), (i, j-1), (i, j+1)
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            if(i-1>=0 && A[i-1][j] == (A[i][j]+1)%N) B[i-1][j] = A[i][j]; // check (i-1, j)
            if(i+1<R  && A[i+1][j] == (A[i][j]+1)%N) B[i+1][j] = A[i][j]; // check (i+1, j)
            if(j-1>=0 && A[i][j-1] == (A[i][j]+1)%N) B[i][j-1] = A[i][j]; // check (i, j-1)
            if(j+1<C  && A[i][j+1] == (A[i][j]+1)%N) B[i][j+1] = A[i][j]; // check (i, j+1)
        }
    }
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            A[i][j] = B[i][j];
        }
    }
    
    if(K!=1) {
        conquer(A, B, R, C, N, K-1);
    }
    return;
}

int main() {
    int N, R, C, K;
    while(cin >> N >> R >> C >> K) {
        if(N == 0 && R == 0 && C == 0 && K == 0) {
            return 0;
        }
        // int** A = new int*[R];
        // int** B = new int*[R];
        for(int i=0; i<R; i++) {
            // A[i] = new int[C];
            // B[i] = new int[C];
            for(int j=0; j<C; j++) {
                cin >> A[i][j];
                B[i][j] = A[i][j];
            }
        }
        
        conquer(A, B, R, C, N, K);
        showMe(A, R, C);

        // for(int i=0; i<R; i++) {
        //     delete[] A[i];
        //     delete[] B[i];
        // }
        // delete[] A;
        // delete[] B;
    }
    return 0;
}