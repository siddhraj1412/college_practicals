#include<iostream>
using namespace std;
int bs(int n[],int g){
   for(int i=1;i<g;i++){
        int count=0;
        for(int j=0;j<g;j++){
            if(n[j]>=i){
            count++;
            }
        }
        if(count==i){
            return i;
        }
    }
    return -1;
}
int main(){
    int a[]={0,4,3,0,4};
    int f=sizeof(a)/sizeof(a[0]);
    int result=bs(a,f);
    cout<<result;
}