#include<bits/stdc++.h>
using namespace std;
#define n 50
class stack{
    int top=-1;
    public:
        int arr[n];
        void push(int m){
            if(top==n-1){
                cout<<"stack overflow";
            }
            else{
                top++;
                arr[top]=m;
            }
        }
        int pop(){
            if(top==-1){
                cout<<"stack underflow";
            }
            else{
                return arr[top--];
            }
        }
        void display(){
            int t=top;
            cout << "stack elements: ";
            while(t<sizeof(arr)){
                cout<<arr[t--]<<" ";
            }
            cout<<endl;
        }
}s;
int main(){
    s.push(2);
    s.push(3);
    cout<<s.pop()<<endl;
    s.push(4);
    cout<<s.pop()<<endl;
    s.display();
}