#include<stdio.h>
void main()
{
    int j,i,k=0;
    char c;
    for(i=1;i<=5;i++){
        c='A';
        for (j=1;j<=i;j++)
        {
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }

    c='A';
    for(i=1;i<=5;i++){
        
        for (j=1;j<=i;j++)
        {
            printf("%c ",c);
        }
        c++;
        printf("\n");
    }
}