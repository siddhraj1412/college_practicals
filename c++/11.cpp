#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;

class A
{
    int a,b;
    public:
    operator float()
    {
        return a;
    }
    void getdata()
    {  
        cout<<"enter years:-";
        cin >> a;
        cout<<"enter months:-";
        cin>>b; 
    }
    void putdata(){
        float p=(float)b/12;
        float q=p+(float)a;
        cout<<setprecision(4);
        cout<<"Employee experience is :-";
        cout<<q;
    }
};

int main()
{
    A oa;
    oa.getdata();
    float n;
    n = oa;
    oa.putdata();
    cout<<"\n23AIML070_Siddhraj";
    return 0;
}