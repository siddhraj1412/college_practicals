#include<iostream>
using namespace std;
int get(int a[],int n){
    int r = n;
    int l=0;    
    while(r>=l){
        int m=(r-l)/2+l;
        int cnt=0;
        for(int j=0;j<=n;j++){
            if(a[j]>=m){
                cnt++;
            }
        }
        if(cnt==m){
            return m;
        }
        else if(cnt>m)
        {
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    return -1;
}
int main(){
    int a[]={1,5,8,9,2,4,7};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<get(a,n);
}