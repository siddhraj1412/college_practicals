#include <stdio.h>
void main()
{
    int i,n,a[100],pos=0,neg=0,evn=0,odd=0;

    printf("how many numbers you want to enter:- ");
    scanf("%d",&n);

    printf("enter your numbers :- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    { 
    if(a[i]>=0)
        pos++;
    else
        neg++;

    if(a[i]%2==0)
        evn++;
    else
        odd++;
    }
    printf("there are %d numbers of number are positive",pos);
    printf("\nthere are %d numbers of number are negativeve",neg);
    printf("\nthere are %d numbers of number are even",evn);
    printf("\nthere are %d numbers of number are odd",odd);

    printf("\n23AIML070 Siddhraj");
}
