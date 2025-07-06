#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[10];
    int *pmarks[10];
    int des=0,fc=0,ps=0,fl=0,i;
    printf("ENTER MARKS :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&marks[i]);
        pmarks[i]=&marks[i];
    }

    for(i=0;i<10;i++)
        if(*pmarks[i]>=70){
            des++;
        } else if(*pmarks[i]<=69 && *pmarks[i]>=60){
            fc++;
        } else if(*pmarks[i]<=59 && *pmarks[i]>=40)  {
            ps++;
        } else{
            fl++;
        }
    printf("\nDISTINCTION : %d",des);
    printf("\nFIRST CLASS : %d",fc);
    printf("\nPASS CLASS : %d",ps);
    printf("\nFAIL : %d",fl);
    printf("\n23AIML070 Siddhraj");
    return 0;
 }


