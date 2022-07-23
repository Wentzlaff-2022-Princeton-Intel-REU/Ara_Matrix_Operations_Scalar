/*--------------------------------------------------------------------*/
/* add.c                                                              */
/*--------------------------------------------------------------------*/

#include "add.h"
#include "matrix.h"
#include "printf.h"

/*--------------------------------------------------------------------*/

void add(Matrix_t mat1, Matrix_t mat2, Matrix_t *resultingMatrix) {
    int row = mat1.m;
    int column = mat1.n;

    resultingMatrix->m = row;
    resultingMatrix->n = column;

    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            resultingMatrix->elements[i * column + j] = mat1.elements[i * column + j] + mat2.elements[i * column + j];
        }
    }
}




