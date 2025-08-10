// Abir Seth
// ENTC A1
// PRN-24070123003

#include<iostream>
using namespace std;
int main(){
int rows,columns;

cout<<"enter number of rows:";
cin>>rows;
cout<<"enter numbere of columns:";
cin>>columns;

int matrix[rows][columns];

cout<<"enter elements of the matrix:\n";
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        cin>>matrix[i][j];
}
cout<<endl;
}
 cout << "\nThe matrix is:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";  
        }
        cout<<endl;
}
return 0;
}

enter number of rows:4
enter numbere of columns:4
enter elements of the matrix:
6
8
90
43

3
2
1
5

6
7
8
9

34
56
57
89


The matrix is:
6 8 90 43
3 2 1 5
6 7 8 9
34 56 57 89


=== Code Execution Successful ===
