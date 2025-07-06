#include<iostream>
using namespace std;
int op=0;
int search(int arr[],int n,int x){
    op++;
    op++;for(int i=0;i<n;(i++,op++)){
        op++;
        if(arr[i]==x){
            op++;   
            return i;
        }
    }
    op++;
    return -1;
}
int main(){
    int arr[]={5,10,15,20,23};
    int x=50;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=search(arr,n,x);
    (result==1)?cout<<"target not found":cout<<result;
    cout<<op;
}