#include<iostream>
using namespace std;
void get(int a[],int n){
    for (int i=0;i<n;i++){
    if(i%2==0){
        if (a[i]>a[i+1]){
            int temp;
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
        }
    }
    else{
            if(a[i]<a[i+1]){
                int temp;
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<"sorted array will be :-";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={7,2,5,4,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    get(a,n);
}