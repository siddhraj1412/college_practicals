#include<iostream>
using namespace std;
void get(int a[],int n){
    int p=0;
    int k=0;
    for(int i=0;i<n;i++){
        int j=n-1;
        if(a[i]>a[i+1] && p==0)
            {
                p=i;
            }
        if(a[j-i]>a[j-i-1] && k==0){
            k=j-i-1;
        }
    }
    int temp;
    temp=a[p];
    a[p]=a[k];
    a[k]=temp;
    cout<<"sorted array will be :-";
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={1,2,5,4,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    get(a,n);
}