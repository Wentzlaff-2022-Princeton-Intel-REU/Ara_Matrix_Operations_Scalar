/*--------------------------------------------------------------------*/
/* multiply.c                                                         */
/*--------------------------------------------------------------------*/

#include "multiply.h"
#include "printf.h"

/*--------------------------------------------------------------------*/

void multiply(Matrix_t mat1, Matrix_t mat2, Matrix_t* resultingMatrix) {
    int p = mat1.m;
    int n = mat1.n;
    int q = mat2.n;

    resultingMatrix->m = p;
    resultingMatrix->n = q;

    // eventually holds the values of the products ith row
    double prodRow[q];

    // iter through rows of mat1
    for (int i = 0; i < p; i++) {
        // this is the stripmining - equivalent loop 
        for (int j = 0; j < q; j++) {
            // resets prodRow
            for (int k = 0; k < q; k++) {
                prodRow[k] = 0;
            }

            // uses matrix multiplication to set prodRow
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < q; l++) {
                    prodRow[l] += (mat1.elements[i * n + k] * mat2.elements[j * q + l]);
                }
            }

            // stores prodRow in the ith row of the resultingMatrix
            for (int k = 0; k < q; k++) {
                resultingMatrix->elements[i * q + k] = prodRow[k];
            }
        }
    }
}