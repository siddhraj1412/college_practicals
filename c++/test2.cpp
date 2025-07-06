#include<iostream>
using namespace std;
class test1{
    private:
        int a;
        int b;
    public:
    int in()
    {
        cin>>a>>b;
    }
    int dis();
};

int main()
{   
    test1 s;
    s.in();
    s.dis();
}
int test1::dis()
{   
    cout<<a+b;
    return 0;
}