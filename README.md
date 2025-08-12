# Experiment: Multidimensional Arrays in C++

## 🎯 Aim
To study and implement **multidimensional arrays** in C++ for various operations such as:
- Comparing elements between rows.
- Adding matrices (normal addition and diagonal sum).
- Multiplying matrices.
- Finding transpose of a matrix.
- Displaying matrix data in a structured format.


## 📜 Introduction

A **multidimensional array** is an array of arrays. The most common type is the 2D array, which can be visualized as a table with rows and columns.  

🛠️ Programs Implemented
1️⃣ Compare Elements of First Row to Second Row

Description:

User enters number of rows and columns (but only first two rows are compared).

Compares each element in first row with corresponding element in second row.

Displays whether elements are equal, greater, or smaller.

Logic:

Take matrix size as input.

Input values for the first and second row.

Compare each column's value in row 1 and row 2.

Output comparison result.

Algorithm:

1. Read rows, columns.
2. Read elements of row 1.
3. Read elements of row 2.
4. For each column:
   - If equal → print "Equal"
   - Else if row1 > row2 → print "Row 1 greater"
   - Else → print "Row 2 greater"
  
     
2️⃣ Matrix Display Program
Description:

Takes full matrix input from user.

Displays matrix in structured form.

Logic:
Simple nested loop to read and print matrix.

Algorithm:

1. Read rows, columns.
2. Loop through rows and columns → read elements.
3. Loop again → print elements in matrix form.

   
3️⃣ Matrix Addition
Description:

Reads two matrices of same size.

Adds corresponding elements.

Displays the sum matrix.

Logic:

Same-size matrices required.

Sum element at [i][j] = First matrix [i][j] + Second matrix [i][j].

Algorithm:

markdown
Copy
Edit
1. Read r, c.
2. Input first matrix A.
3. Input second matrix B.
4. For each i, j → sum[i][j] = A[i][j] + B[i][j].
5. Print sum matrix.
   
4️⃣ Diagonal Sum Matrix
Description:

Reads two matrices.

Adds elements only when they are on the diagonal (i == j).

Other elements are set to zero.

Logic:
Check if (i == j) before adding.

Algorithm:

1. Read r, c.
2. Input first matrix A.
3. Input second matrix B.
4. For each i, j:
   - If i == j → sum[i][j] = A[i][j] + B[i][j]
   - Else → sum[i][j] = 0
5. Print sum matrix.

   
5️⃣ Matrix Multiplication
Description:

Multiplies two matrices using standard matrix multiplication rule.

Number of columns of first matrix = number of rows of second matrix.

Logic:
C[i][j] = sum(A[i][k] * B[k][j]) for k in range(cols_of_A)

Algorithm:

1. Read r, c.
2. Input matrix A.
3. Input matrix B.
4. Initialize product matrix to zero.
5. For each i, j:
   - For k from 0 to c-1:
       prod[i][j] += A[i][k] * B[k][j]
6. Print product matrix.
   
6️⃣ Matrix Transpose
Description:

Reads a matrix.

Creates its transpose by swapping rows and columns.

Logic:
Transpose of matrix A[i][j] is AT[j][i].

Algorithm:

1. Read r, c.
2. Input matrix A.
3. For each i, j → transpose[j][i] = A[i][j]
4. Print transpose matrix.
📌 Summary
This experiment demonstrated:

How to declare and use 2D arrays in C++.

Nested loops for accessing matrix elements.

Different operations: comparison, addition, multiplication, diagonal sum, transpose.

Basic logic building with conditions and loops.

🖥️ Sample Output for Comparison Program

Enter number of rows: 2
Enter number of columns: 2
Enter two numbers for first row: 4 6
Enter two numbers for second row: 7 6
First element in row 2 is greater
Second elements are equal

Enter number of rows: 3
Enter number of columns: 3
First matrix:
3 4 2
1 3 5
6 9 0
Second matrix:
5 4 3
2 8 0
1 9 8
Sum:
8 8 5
3 11 5
7 18 8

Enter number of rows: 2
Enter number of columns: 2
Enter elements of the matrix:
2 3
4 5
Transpose of the matrix:
2 4
3 5
