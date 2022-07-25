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
    matrix_A.m = 7;
    matrix_A.n = 7;
    matrix_B.m = 7;
    matrix_B.n = 7;
    int32_t arr[49] = {59, 63, 63, 28, 76, 64, 32, 43, 36, 92, 59, 63, 63, 28, 76, 64, 32, 43, 36, 92, 59, 63, 63, 28, 76, 64, 32, 43, 36, 92, 59, 63, 63, 28, 76, 64, 32, 43, 36, 92, 59, 63, 63, 28, 76, 64, 32, 43, 36};
    int32_t arr2[49] = {59, 63, 63, 28, 76, 64, 32, 43, 36, 92, 59, 63, 63, 28, 76, 64, 32, 43, 36, 92, 59, 63, 63, 28, 76, 64, 32, 43, 36, 92, 59, 63, 63, 28, 76, 64, 32, 43, 36, 92, 59, 63, 63, 28, 76, 64, 32, 43, 36};
    matrix_A.elements = elementsA;
    matrix_B.elements = elementsB;

   // printf("Scalar Addition: \n");

   // printMatrix(matrix_A);
   // printf("\n");
   // printMatrix(matrix_B);
   // printf("\n");

    Matrix_t sum;
    int32_t elementsSum[49];
    sum.elements = elementsSum;

    start_timer();
    add(matrix_A, matrix_B, &sum);
    stop_timer();
    int64_t cycle_time = get_timer();
   // printMatrix(sum);

    printf("Runtime (cycles): %d\n", cycle_time);


   // printf("Scalar Multiplication: \n");

   // printMatrix(matrix_A);
   // printf("\n");
   // printMatrix(matrix_B);
  //  printf("\n");

    Matrix_t product;
    int32_t elementsProd[49];
    product.elements = elementsProd;
    
    start_timer();
    multiply(matrix_A, matrix_B, &product);
    stop_timer();
    int64_t cycle_timeb = get_timer();
  //  printMatrix(product);

    printf("Runtime (cycles): %d\n", cycle_timeb);

    return 0;
}