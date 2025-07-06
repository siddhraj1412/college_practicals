#include<stdio.h>
void tower(int n,char a,char b,char c){
    if(n==1){
        printf("\nmove 1st ring from %c to %c",a,c);
    }
    else{
    tower(n-1,a,c,b);
    printf("\nmove %d ring from %c to %c",n,a,c);
    tower(n-1,b,a,c);
    }
}
int main(){
    tower(3,'a','b','c');
}