#include<stdio.h>
void main()
{
    int j,i,k;
    for(i=1;i<=5;i++)
    {
        for(k=5;k>=i;k--)
            printf(" ");
        for (j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    printf("\n");
    }
}