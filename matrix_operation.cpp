#include <iostream>
using namespace std;

// function to add two matrices
void addmatrices(int rows, int cols, int matrix1[][10], int matrix2[][10], int result[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// function to subtract two matrices
void subtractmatrices(int rows, int cols, int matrix1[][10], int matrix2[][10], int result[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

// function to multiply two matrices
void multiplymatrices(int rows1, int cols1, int matrix1[][10], int rows2, int cols2, int matrix2[][10], int result[][10]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0; // initialise result matrix
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// function to transpose a matrix
void transposematrix(int rows, int cols, int matrix[][10], int result[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

// function to display a matrix
void displaymatrix(int rows, int cols, int matrix[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows1, cols1, rows2, cols2;
    int choice;

// input for first matrix
    cout << "Enter the number of rows and columns for matrix 1: ";
    cin >> rows1 >> cols1;
    cout << "Enter the elements of matrix 1:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }

// input for second matrix
    cout << "Enter the number of rows and columns for matrix 2: ";
    cin >> rows2 >> cols2;
    cout << "Enter the elements of matrix 2:\n";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }

    //menu driven switch case
    cout << "\n Select an operation to perform:\n";
    cout << "1. Add matrices\n2. Subtract matrices\n3. Multiply matrices\n4. Transpose Matrix 1\n5. Transpose Matrix 2\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            if (rows1 == rows2 && cols1 == cols2) {
                addmatrices(rows1, cols1, matrix1, matrix2, result);
                cout << "Result of addition:\n";
                displaymatrix(rows1, cols1, result);
            } else {
                cout << "Addition not possible.Matrices must have the same dimensions for addition.\n";
            }
            break;

        case 2:
            if (rows1 == rows2 && cols1 == cols2) {
                subtractmatrices(rows1, cols1, matrix1, matrix2, result);
                cout << "Result of subtraction:\n";
                displaymatrix(rows1, cols1, result);
            } else {
                cout << "Subtraction not possible.Matrices must have the same dimensions for subtraction.\n";
            }
            break;

        case 3:
            if (cols1 == rows2) {
                multiplymatrices(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                cout << "Result of multiplication:\n";
                displaymatrix(rows1, cols2, result);
            } else {
                cout << "Multiplication not possible.Invalid dimensions for multiplication.\n";
            }
            break;

        case 4:
            transposematrix(rows1, cols1, matrix1, result);
            cout << "Transpose of Matrix 1:\n";
            displaymatrix(cols1, rows1, result);
            break;

        case 5:
            transposematrix(rows2, cols2, matrix2, result);
            cout << "Transpose of Matrix 2:\n";
            displaymatrix(cols2, rows2, result);
            break;

        default:
            cout << "Invalid choice!\n";
            break;
    }

    return 0;
}
