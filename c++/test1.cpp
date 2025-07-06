#include<iostream>
using namespace std;
class test1{
    private:
        int a;
    public:
        int b;
    int in()
    {
        cin>>a>>b;
    }
    int dis()
    {
        cout<<a+b;
        return 0;
    }
};


int main()
{   
    test1 a;
    a.in();
    a.dis();
}