// ____________Matrix Multiplication______________________
#include <iostream>
using namespace std;

#define SIZE 50

// Function to multiply matrices A and B and print the result
void multiplyMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE], int R1, int C1, int R2, int C2) {
    int result[SIZE][SIZE] = {0};
 int sum;
    // Perform matrix multiplication
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            sum = 0;
            for (int k = 0; k < C1; k++) {
                sum += A[i][k] * B[k][j];
            }

            result[i][j] = sum;
        }
    }


    // Print the resultant matrix
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r1, c1, r2, c2;

        // Input dimensions and matrix A
        cin >> r1 >> c1;
        int A[SIZE][SIZE];
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cin >> A[i][j];
            }
        }

        // Input dimensions and matrix B
        cin >> r2 >> c2;
        int B[SIZE][SIZE];
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                cin >> B[i][j];
            }
        }

        // Validate matrix dimensions for multiplication
        if (c1 != r2) {
            cout << "Matrix multiplication not possible." << endl;
        } else {
            multiplyMatrix(A, B, r1, c1, r2, c2);
        }
    }
    return 0;
}
