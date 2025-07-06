#include<iostream>
using namespace std;
int op=0;
int fact(int n){
    op++;
    op++;if(n==1){
    return 1;op++;
    }
    else{
        return n*fact(n-1);op++;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    cout<<endl<<op;
}