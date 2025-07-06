#include<iostream>

using namespace std;
int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x)
            return i;
    }
    return 1;
}


int main(){
    int arr[]={20,30,10,40,50};
    int x=50;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=search(arr,n,x);
    (result==1)?cout<<"target not found":cout<<result;
}