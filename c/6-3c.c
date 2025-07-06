#include<stdio.h>
void main()
{
    int j,i,k,n;

    printf("Enter the number of rows :-");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
       for(j=1;j<n;j++)
       {
            printf(" ");
       }
       for(j=1;j<=i;j++)
       {
            printf("%c",j+64);
       }
       for(j=i;j>=1;j--)
       {
            printf("%c",j+64);
       }
    printf("\n");
    }
}