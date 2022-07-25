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
    matrix_A.m = 10;
    matrix_A.n = 10;
    matrix_B.m = 10;
    matrix_B.n = 10;
    int32_t elementsA[100] = {59, 63, 63, 28, 76, 64, 32, 43, 36, 92, 28, 23, 67, 47, 2, 100, 49, 47, 40, 66, 26, 93, 27, 58, 5, 86, 47, 51, 16, 60, 78, 88, 81, 25, 29, 81, 85, 73, 64, 15, 2, 63, 70, 36, 75, 53, 43, 3, 77, 1, 66, 31, 35, 38, 26, 10, 54, 4, 10, 27, 74, 7, 26, 81, 71, 9, 44, 61, 54, 18, 27, 22, 30, 73, 49, 97, 68, 25, 63, 9, 7, 56, 98, 20, 15, 71, 64, 64, 26, 13, 9, 2, 100, 79, 62, 55, 32, 37, 44, 1};
    int32_t elementsB[100] = {59, 63, 63, 28, 76, 64, 32, 43, 36, 92, 28, 23, 67, 47, 2, 100, 49, 47, 40, 66, 26, 93, 27, 58, 5, 86, 47, 51, 16, 60, 78, 88, 81, 25, 29, 81, 85, 73, 64, 15, 2, 63, 70, 36, 75, 53, 43, 3, 77, 1, 66, 31, 35, 38, 26, 10, 54, 4, 10, 27, 74, 7, 26, 81, 71, 9, 44, 61, 54, 18, 27, 22, 30, 73, 49, 97, 68, 25, 63, 9, 7, 56, 98, 20, 15, 71, 64, 64, 26, 13, 9, 2, 100, 79, 62, 55, 32, 37, 44, 1};
    matrix_A.elements = elementsA;
    matrix_B.elements = elementsB;

    printf("Scalar Addition: \n");

    printMatrix(matrix_A);
    printf("\n");
    printMatrix(matrix_B);
    printf("\n");

    Matrix_t sum;
    int32_t elementsSum[100];
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
    int32_t elementsProd[100];
    product.elements = elementsProd;
    
    start_timer();
    multiply(matrix_A, matrix_B, &product);
    stop_timer();
    int64_t cycle_timeb = get_timer();
    printMatrix(product);

    printf("Runtime (cycles): %d\n", cycle_timeb);

    return 0;
}