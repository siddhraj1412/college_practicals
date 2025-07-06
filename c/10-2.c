#include<stdio.h>
union book{
    int flag;
    float price;
    int accession_num;
    char title[20];
    char author_name[20];

};
 
int main(){
    union book b[2];
    for(int i=0;i<2;i++){
        printf("\nbook no: %d",i+1);
        printf("\nEnter Accession Number: ");
        scanf("%d",&b[i].accession_num);
        printf("Enter the Title of book: ");
        getchar();
        fgets(b[i].title,20,stdin);
        printf("Enter the Author_name: ");
         getchar();
        fgets(b[i].author_name,20,stdin);
        printf("Enter the Price: ");
        scanf("%f",&b[i].price);
        printf("Enter Flag (only 0 or 1): ");
        scanf("%d",&b[i].flag);
        if(b[i].flag==1){
            printf("Book is Issued");
        }
        else{
            printf("Book is not Issued");
        }
        printf("\n");
    }
    printf("\n-------------------------------------------------");
    printf("\n23AIML070 Siddhraj");
return 0;
}
