#include<stdio.h>
int main(void) {
    int i, j, rows, n;


    printf("Enter the number of lines:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {   for(j=n;j>i;j--)
        	printf(" ");
        j=j-1;
        for(j=1;j<=i;j++)
        	printf("*");
        printf("\n");
                      }

}

