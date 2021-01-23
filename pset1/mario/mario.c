#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n, i, j;
    do
    {
        n = get_int("Enter height:");
    }
    while (n < 1 || n > 8);
    for (i = 1; i <= n; i++)
    {   for (j = n; j > i; j--)
        printf(" ");
        j=j-1;
        for (j = 1; j <= i; j++)
        printf("#");
        printf("\n");
    }

}