#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Rows: ";
    cin >> r;
    cout << "Columns: ";
    cin >> c;

    int a[10][10], b[10][10], prod[10][10];

    cout << "First matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << "Second matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            prod[i][j] = 0;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            for (int k = 0; k < c; k++)
                prod[i][j] += a[i][k] * b[k][j];

    cout << "Product:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << prod[i][j] << " ";
        cout << "\n";
    }

    return 0;
}

Rows: 2
Columns: 2
First matrix:
4
7

5
8
Second matrix:
5
7

9
0
Product:
83 28 
97 35 


=== Code Execution Successful ===
