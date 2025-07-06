#include<iostream>
using namespace std;
void get(int a[],int n){
    int k,j;
    for(int i=1;i<n;i++){
        k=a[i];
        j=i-1;
        while(j>=0 && a[j]>k){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
    }
    cout<<"sorted array will be :- ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={45,18,7,56,12,78,8,33};
    int n=sizeof(a)/sizeof(a[0]);
    get(a,n);
}