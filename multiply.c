/*--------------------------------------------------------------------*/
/* multiply.c                                                         */
/*--------------------------------------------------------------------*/

// The method mat_multiply multiplies two matrices.  


#include "multiply.h"

/*--------------------------------------------------------------------*/

void multiply(Matrix_t mat1, Matrix_t mat2, Matrix_t* resultingMatrix) {

    int p = mat1.m;
    int n = mat1.n;
    int q = mat2.n;

    resultingMatrix->m = p;
    resultingMatrix->n = q;


    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            resultingMatrix->elements[i * q + j] = 0;
            for (int k = 0; k < n; k++) {
                resultingMatrix->elements[i * q + j] += mat1.elements[i * q + k] * mat2.elements[k * q + j];
            }
        }
    }

}