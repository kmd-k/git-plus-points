#include <stdio.h>

int main ()
{

    int x[4] = {11, 32, 29, 86};
    double y[4] = {4.21, 7.83, 5.75, 6.96};
    char z[5] = {'B', 'O', 'N', 'U', 'S'};

    printf("|        | Value |       Address        |\n");
    printf("|:------:|:-----:|      :-------:       |\n");
    printf("| `x[0]` |   %d  |    %p    |\n", x[0], &x[0]);
    printf("| `x[1]` |   %d  |    %p    |\n", x[1], &x[1]);
    printf("| `x[2]` |   %d  |    %p    |\n", x[2], &x[2]);
    printf("| `x[3]` |   %d  |    %p    |\n", x[3], &x[3]);
    printf("| `y[0]` |  %.2f |    %p    |\n", y[0], &y[0]);
    printf("| `y[1]` |  %.2f |    %p    |\n", y[1], &y[1]);
    printf("| `y[2]` |  %.2f |    %p    |\n", y[2], &y[2]);
    printf("| `y[3]` |  %.2f |    %p    |\n", y[3], &y[3]);
    printf("| `z[0]` |   %c   |    %p    |\n", z[0], &z[0]);
    printf("| `z[1]` |   %c   |    %p    |\n", z[1], &z[1]);
    printf("| `z[2]` |   %c   |    %p    |\n", z[2], &z[2]);
    printf("| `z[3]` |   %c   |    %p    |\n", z[3], &z[3]);
    printf("| `z[4]` |   %c   |    %p    |\n", z[4], &z[4]);

    printf("\nThe memory address of the last element of z is: %p", &z[4]); //0x7ff7bb85d48f

}
