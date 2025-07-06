#include<iostream>
using namespace std;
int get(int a[],int n,int x){
    int l=0,r=0;
    int k=n-1;
    while(l<=r){
        if(a[l]>a[r]){
                break;
            }
            r++;
    }
    int b=r-1;
    while(l<=b){
        int m=(b-l)/2+l;
        if(x>a[b]){
            break;
        }
        if(x==a[m]){
            cout<<m;
            return 0;
        }
        if(x>a[m])
        {
            l=x+1;
        }
        else{
            b=x-1;
        }
        
    }
    while(r<=k){
        int m=(k-r)/2+r;
        if(x==a[m]){
            cout<<m;
            return 0;
        }
        else if(x>a[m])
        {
            r=x+1;
        }
        else if(x<a[m]){
            k=x-1;
        }
        else{
            cout<<"element not found";
        }
    }
    return 0;
}
int main(){
    int a[]={10,12,13,5,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    int x=5;
    get(a,n,x);
}