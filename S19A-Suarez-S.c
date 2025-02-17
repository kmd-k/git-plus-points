#include <stdio.h>

int main ()
{

    int x[4] = {11, 32, 29, 86};
    double y[4] = {4.21, 7.83, 5.75, 6.96};
    char z[5] = {'B', 'O', 'N', 'U', 'S'};

    printf("|        | Value | Address |\n");
    printf("|:------:|:-----:|:-------:|\n");
    printf("| `x[0]` |   %d  |    ?    |\n", x[0]);
    printf("| `x[1]` |   %d  |    ?    |\n", x[1]);
    printf("| `x[2]` |   %d  |    ?    |\n", x[2]);
    printf("| `x[3]` |   %d  |    ?    |\n", x[3]);
    printf("| `y[0]` |  %.2f |    ?    |\n", y[0]);
    printf("| `y[1]` |  %.2f |    ?    |\n", y[1]);
    printf("| `y[2]` |  %.2f |    ?    |\n", y[2]);
    printf("| `y[3]` |  %.2f |    ?    |\n", y[3]);
    printf("| `z[0]` |   %c   |    ?    |\n", z[0]);
    printf("| `z[1]` |   %c   |    ?    |\n", z[1]);
    printf("| `z[2]` |   %c   |    ?    |\n", z[2]);
    printf("| `z[3]` |   %c   |    ?    |\n", z[3]);
    printf("| `z[4]` |   %c   |    ?    |\n", z[4]);


}