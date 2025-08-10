// Abir Seth
// ENTC A1
// PRN-24070123

#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of Rows: ";
    cin >> r;
    cout << "Enter number of Columns: ";
    cin >> c;

    int a[10][10], b[10][10], s[10][10];

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
            s[i][j] = a[i][j] + b[i][j];

    cout << "\nSum:\n";
    for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++)
            cout << s[i][j] << " ";
        cout << "\n";
    }
}

Enter number of Rows: 3
Enter number of Columns: 3
First matrix:

3
4
2

1
3
5

6
9
0

Second matrix:
5
4
3

2
8
0

1
9
8

Sum:
8 8 5 
3 11 5 
7 18 8 
