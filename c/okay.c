#include<stdio.h>

int main()
{
    int n,i,j;
   
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for (j=1;j<n-i+1;j++)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }

        for (j=i-1;j>=1;j--)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
printf("\n23AIML070 siddhraj.");

}
