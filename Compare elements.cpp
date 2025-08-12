#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int a1, a2, b1, b2; 

    cout << "Enter two numbers for first row: ";
    cin >> a1 >> a2;

    cout << "Enter two numbers for second row: ";
    cin >> b1 >> b2;

    if (a1 == b1)
        cout << "First elements are equal\n";
    else if (a1 > b1)
        cout << "First element in row 1 is greater\n";
    else
        cout << "First element in row 2 is greater\n";

    if (a2 == b2)
        cout << "Second elements are equal\n";
    else if (a2 > b2)
        cout << "Second element in row 1 is greater\n";
    else
        cout << "Second element in row 2 is greater\n";

    return 0;
}

Enter number of rows: 2
Enter number of columns: 2
Enter two numbers for first row: 4 6
Enter two numbers for second row: 7 6
First element in row 2 is greater
Second elements are equal


=== Code Execution Successful ===
