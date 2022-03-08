#include <stdio.h>
int main()
{
    int N, row, col, space;
    printf("Enter the Number: ");
    scanf("%d", &N);
    for (row = 1; row <= N; row++, printf("\n"))
    {
        for (col = 1; col <= row; col++)
            printf("*");
        for (space = 1; space <= 2 * (N - row); space++)
            printf(" ");
        for (col = 1; col <= row; col++)
            printf("*");
    }
    for (row = N; row >= 1; row--, printf("\n"))
    {
        for (col = 1; col <= row; col++)
            printf("*");
        for (space = 1; space <= 2 * (N - row); space++)
            printf(" ");
        for (col = 1; col <= row; col++)
            printf("*");
    }
    return 0;
}
