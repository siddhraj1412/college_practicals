#include<iostream>
using namespace std;
int op=0;
int fact(int n){
    op++;
    int res=1;
    op++;for(int i=1;i<=n;(i++,op++)){
        op++;
        res*=i;op++;
    }
    cout<<res;
}
int main(){
    int n;
    cin>>n;
    fact(n);
    cout<<endl<<op;
}