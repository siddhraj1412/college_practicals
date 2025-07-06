#include<stdio.h>

struct employee_1{
    char name[20];
    int age;
    struct employee_2{
        char add[30];
        int salary;

    }b;
}a;
 
int main(){
    printf("Enter the Employee Name: ");
    fgets(a.name,20,stdin);
    
    printf("Enter The Age of Employee: ");
    scanf("%d",&a.age);
    
    printf("Enter the Address of Employee: ");
    getchar();
    fgets(a.b.add,30,stdin);
    
    printf("Enter the Salary: ");
    scanf("%d",&a.b.salary);
    
    printf("\n\n");
    printf("Name:");
    printf("%s",a.name);
    printf("Age:%d\n",a.age);
    printf("Address:");
    printf("%s",a.b.add);
    printf("Salary:%d\n",a.b.salary);
    printf("\n\n");
    printf("\n23AIML070 Siddhraj");
    
return 0;
}
