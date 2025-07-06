#include<iostream>
using namespace std;
int bs(int arr[],int l,int r,int x){
    while(r>=l){
        int mid=(r)+l/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,12,14,15,16,17,18};
    int x=18;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=bs(arr,0,n-1,x);
    (result==-1)?cout<<"not found":cout<<"it is on Index no. :- "<<result;
}