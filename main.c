/*--------------------------------------------------------------------*/
/* main.c                                                             */
/*--------------------------------------------------------------------*/

#include "add.h"
#include "multiply.h"
#include "print.h"
#include "printf.h"
#include "runtime.h"

/*--------------------------------------------------------------------*/

int main() {
    Matrix_t matrix_A, matrix_B;
    matrix_A.m = 2;
    matrix_A.n = 2;
    matrix_B.m = 2;
    matrix_B.n = 2;
    int32_t elementsA[4] = {1, 1, 1, 1};
    int32_t elementsB[4] = {1, 1, 1, 1};
    matrix_A.elements = elementsA;
    matrix_B.elements = elementsB;

    printf("Scalar Addition: \n");

    printMatrix(matrix_A);
    printf("\n");
    printMatrix(matrix_B);
    printf("\n");

    Matrix_t sum;
    int32_t elementsSum[4];
    sum.elements = elementsSum;

    start_timer();
    add(matrix_A, matrix_B, &sum);
    stop_timer();
    int64_t cycle_time = get_timer();
    printMatrix(sum);

    printf("Runtime (cycles): %d\n", cycle_time);


    printf("Scalar Multiplication: \n");

    printMatrix(matrix_A);
    printf("\n");
    printMatrix(matrix_B);
    printf("\n");

    Matrix_t product;
    int32_t elementsProd[4];
    product.elements = elementsProd;
    
    start_timer();
    multiply(matrix_A, matrix_B, &product);
    stop_timer();
    int64_t cycle_timeb = get_timer();
    printMatrix(product);

    printf("Runtime (cycles): %d\n", cycle_timeb);

    return 0;
}