/*--------------------------------------------------------------------*/
/* add.c                                                              */
/*--------------------------------------------------------------------*/

// The method mat_add adds two mxn arrays and returns the result in an mxn array. 
// Both arrays must be of the same dimensions.


#include "add.h"
#include "matrix.h"
#include "printf.h"

/*--------------------------------------------------------------------*/

void add(Matrix_t mat1, Matrix_t mat2, Matrix_t resultingMatrix) {
    printf("0\n");
    int row = mat1.m;
    int column = mat1.n;
    printf("1\n");


    // Matrix_t resultingMatrix;
    resultingMatrix.m = row;
    resultingMatrix.n = column;
    // int32_t arr[4];
    // resultingMatrix.elements = arr;
    
    printf("2\n");


    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("3\n");
            resultingMatrix.elements[i*column + j] = mat1.elements[i*column + j] + mat2.elements[i*column + j];
            printf("4\n");
        }
    }
    printf("5\n");


    // return resultingMatrix;
}




