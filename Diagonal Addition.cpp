// Abir Seth
// PRN-24070123003
// ENTC A1

#include <iostream>
using namespace std;

int main() 
{
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int a[10][10], b[10][10], sum[10][10];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
     for (int j = 0; j < c; j++) {
            if (i == j) 
            { 
                sum[i][j] = a[i][j] + b[i][j];
            } 
            else 
            {
                sum[i][j] = 0; // non-diagonal set to 0
            }
        }
    }

    cout << "Diagonal sum matrix:\n";
    for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


Enter number of rows: 2
Enter number of columns: 2
Enter elements of first matrix:
1
4

6
8
Enter elements of second matrix:
9
0

3
35
Diagonal sum matrix:
10 0 
0 43 


=== Code Execution Successful ===
