// Abir Seth
// ENTC A1
// PRN- 24070123003

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[10][10], transpose[10][10];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) {
     for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

Enter number of rows: 2
Enter number of columns: 2
Enter elements of the matrix:
2
3

4
5
Transpose of the matrix:
2 4 
3 5 


=== Code Execution Successful ===
