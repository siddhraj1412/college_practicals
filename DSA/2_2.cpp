#include<iostream>
using namespace std;
void get(int a[],int n){
    int pass=0;
    int swap=0;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=1+i;j<n;j++){
            if(a[min]>a[j]){
                min=j;
                pass++;
            }
        }
        if(min!=i){
            int temp;
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
            swap++;
        }
    }
    cout<<"sorted array will be :- ";
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"swap "<<swap;
    cout<<endl<<"pass "<<pass;

}
int main(){
    int a[]={45,18,7,56,12,78,8,33};
    int n=sizeof(a)/sizeof(a[0]);
    get(a,n);
}