#include<iostream>
#include<stack>
using namespace std;

int eval(string s){
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if (isdigit(s[i])){
            st.push(s[i] - '0');
        }
        else{
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            switch(s[i]){
                case '+':
                    st.push(b+a);
                    break;
                case '-':
                    st.push(b-a);
                    break;
                case '*':
                    st.push(b*a);
                    break;
                case '/':
                    st.push(b/a);
                    break;
            }
        }
    }
    return st.top();
}
int main(){
    string s="231*+9-";
    cout<<eval(s);
}