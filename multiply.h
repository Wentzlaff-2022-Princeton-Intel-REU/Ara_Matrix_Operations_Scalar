#pragma once
/*------------------------------------------------------------*/
/* multiply.c                                                 */
/*------------------------------------------------------------*/

#include "matrix.h"

/*------------------------------------------------------------*/

/* The multiply function takes in two matrices as input and returns
a matrix that is the product of the two arguments */
void multiply(Matrix_t mat1, Matrix_t mat2, Matrix_t* resultingMatrix);
