#include<iostream>
#include<cmath>
using namespace std;
class a{
    float q,e,f,g;
    public:
        a(){
            q=1;
        }
        a(float &x){
            q=x;
        }
        void putdata(){
            int p=q;
            f=q-p;
            g=f*12;
            cout<<"Employee experience is :-"<<p<<" years and "<<g<<" months";
        }
};

int main(){
    float n;
    cout<<"enter employee experience:-";
    cin>>n;
    a ol;
    ol=n;
    ol.putdata();
    cout<<"23AIML070_Siddhraj";
    return 0;
}