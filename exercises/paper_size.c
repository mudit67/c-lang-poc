// A0 has dimensions  1189 X 849. each subsequent size has half the dimension put parallel to its shorter side.
// This program will print the dimensions for A0,A1,...A8.

#include <stdio.h>
int main()
{
    int A0_l = 1189, A0_b = 849;
    int A1_l = A0_b, A1_b = A0_l / 2;
    int A2_l = A1_b, A2_b = A1_l / 2;
    int A3_l = A2_b, A3_b = A2_l / 2;
    int A4_l = A3_b, A4_b = A3_l / 2;
    int A5_l = A4_b, A5_b = A4_l / 2;
    int A6_l = A5_b, A6_b = A5_l / 2;
    int A7_l = A6_b, A7_b = A6_l / 2;
    int A8_l = A7_b, A8_b = A7_l / 2;

    printf("The dimensions of A0  are: %d x %d.\n", A0_l, A0_b);
    printf("The dimensions of A1 are: %d x %d.\n", A1_l, A1_b);
    printf("The dimensions of A2 are: %d x %d.\n", A2_l, A2_b);
    printf("The dimensions of A3 are: %d x %d.\n", A3_l, A3_b);
    printf("The dimensions of A4 are: %d x %d.\n", A4_l, A4_b);
    printf("The dimensions of A5 are: %d x %d.\n", A5_l, A5_b);
    printf("The dimensions of A6 are: %d x %d.\n", A6_l, A6_b);
    printf("The dimensions of A7 are: %d x %d.\n", A7_l, A7_b);
    printf("The dimensions of A8 are: %d x %d.\n", A8_l, A8_b);
    return 0;
}