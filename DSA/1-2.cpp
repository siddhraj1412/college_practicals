#include<iostream>

using namespace std;
int ma(string str){
    int rs=0,l=0;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]!=' '){
            l++;
        }
        else{
            rs=max(l,rs);
            l=0;
        }      
    }
    return max(l,rs);
}


int main(){
    string s="there is a banana tree";
    cout<< ma(s);
}