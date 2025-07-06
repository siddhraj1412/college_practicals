#include<iostream>
using namespace std;
static int count =0;
class circle{
    public:
        float r,a;
        circle(void)
        {
            r=1;
            count++;
        }
        circle(int a)
        {
            r=a;
            count++;
        }
        circle(circle &w)
        {
            r=w.r;
            count++;
        }
        float display()
        {
            return 3.148*r*r;
        }
        ~circle(){
            cout<<"\none object is deleted";
            cout<<"\ntotal objects are :-"<<--count; 
        }
};

int main()
{   
    {
    circle c,c1(5);
    circle c2(c);
    circle *c3=new circle(c1); 
    cout<<"circle with radius 1 is : "<<c.display();
    cout<<"\ncircle with radius 5 is : "<< c1.display();
    cout<<"\ncircle with radius 1 is : "<<c2.display();
    cout<<"\n"<<c3->r;
    cout<<endl;
    cout<<c3->display();
    cout<<endl<<"\ntotal objects are : "<<count; 
    delete c3;
    }
    cout<<"\n23AIML070_Siddhraj\n";
}