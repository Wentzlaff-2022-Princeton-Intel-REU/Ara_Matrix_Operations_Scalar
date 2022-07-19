/*--------------------------------------------------------------------*/
/* main.c                                                             */
/*--------------------------------------------------------------------*/


#include "matrix.h"
#include "reading.h"
#include "add.h"
#include "multiply.h"
#include "print.h"
#include "runtime.h"

/*--------------------------------------------------------------------*/

int main() {
    
    Matrix_t matrix_A, matrix_B;
    matrix_A.m = 2;
    matrix_A.n = 2;
    matrix_B.m = 2;
    matrix_B.n = 2;
    int32_t arr[4] = {1,1,1,1};
    int32_t arr2[4] = {1,1,1,1};
    matrix_A.elements = arr;
    matrix_B.elements = arr2;
    // readMatrices(&matrix_A, &matrix_B);

    printf("Scalar Addition: \n");

    printMatrix(matrix_A);
    printMatrix(matrix_B);

    //Matrix_t sum;
    
    //start_timer();
    printMatrix(add(matrix_A, matrix_B));
  //  stop_timer();
   // int64_t cycle_time = get_timer();
    // printMatrix(sum);

    //printf("Runtime (cycles): %x\n", cycle_time);
    //printMatrix(sum);

    printf("Scalar Multiplication: ");

    printMatrix(matrix_A);
    printMatrix(matrix_B);

    Matrix_t product;
    
    //start_timer();
    product = multiply(matrix_A, matrix_B);
   // stop_timer();
   // int64_t cycle_timeb = get_timer();
    printMatrix(product);

    //printf("Runtime (cycles): %x\n", cycle_timeb);
    printMatrix(multiply(matrix_A, matrix_B));

    return 0;
}