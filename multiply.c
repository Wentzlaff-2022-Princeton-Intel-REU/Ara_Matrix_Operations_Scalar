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


    double vc[q];

    for (int i = 0; i < p; i++) {

        int avl = q;

        for (int j = 0; j < q; j++) { // This is the stripmining - equivalent loop. 

           for (int m = 0; m < q; m++){
            vc[m] = 0;
           }

            // resultingMatrix->elements[i * q + j] = 0;
            for (int k = 0; k < n; k++) {

                for (int l = 0; l < q; l++){
                    vc[l] = vc[l] + (mat1.elements[i*n+k] * mat2.elements[j * q]);
                    // resultingMatrix->elements[i*q+l] = resultingMatrix->elements[i*q+l] + (mat1.elements[i*n+k] * mat2.elements[j * q + l]);
              }

                resultingMatrix->elements[i*q] = vc;
               // resultingMatrix->elements[i * q + j] += mat1.elements[i * q + k] * mat2.elements[k * q + j];
            }

            
        }
    }

}