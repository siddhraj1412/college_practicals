#include<iostream>
using namespace std;
void get(int a[],int n){
    for(int i=0;i<n;i++){
        int flag=1;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag =-1;
            }
        }
        if(flag==1){
            break;
        }
    }
    cout<<"sorted array will be :-";
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={45,18,7,56,12,78,8,33};
    int n=sizeof(a)/sizeof(a[0]);
    get(a,n);
}