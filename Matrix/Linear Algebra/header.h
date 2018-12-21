#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
typedef struct DATABASE{
    int numer;//分子
    int deno;//分母
}database;

typedef struct MATRIX{
    database **data;
    int row,col;
}matrix;

/* database operation */
database Add(database a1,database a2);// a1+a2
database Subtract(database a1,database a2);// a1-a2
database Multiply(database a1,database a2);// a1*a2
database Divide(database a1,database a2);// a1/a2
void CorrectData(database *data);// Applied only if deno<0 
void gcd(database*data1);
void gcd_Row(database *row,int col);

/* Matrix Construction */
matrix *InitializeMatrix(int Row,int Col);
void ReleaseMatrix(matrix *mat);
matrix *ReadMatrix();
database read();
void PrintMatrix(const matrix mat);

/*Elementary row operation*/
void Replacement(const database row1[],database row2[],const int col,const database multiple);
void Interchange(database *row1,database *row2,const int col);
void Scaling(database *row,const database scales,const int col);

/* basic matrix operation */
bool RowReduceToEchelonForm(matrix *mat);
void EchelonFormToReduceEchelonForm(matrix*mat);
void RowReduceToRowReduceEchelonForm(matrix *mat);//存在缺陷 可能会出现分子分母数值太大而爆掉

/* Operation on IO */
void ClearBlank();
void print(database data);
void print_row(database data);


database Determinant(const matrix mat1);
void FindSolution(matrix mat);
void SolutionSet(matrix mat);
matrix *FindInverse(matrix mat);
matrix *LUFactorization(matrix *mat);
matrix *MatrixMultiplication(matrix *mat1,matrix *mat2);
matrix *MatrixMultiplicationScalarProduct(matrix *mat1,matrix *mat2);


database Determinant(const matrix mat1);
void FindSolution(matrix mat);
void SolutionSet(matrix mat);
matrix *FindInverse(matrix mat);
matrix *LUFactorization(matrix *mat);
matrix *MatrixMultiplication(matrix *mat1,matrix *mat2);
matrix *MatrixMultiplicationScalarProduct(matrix *mat1,matrix *mat2);
void ScalarOperation(char q,matrix *mat,database scalar);