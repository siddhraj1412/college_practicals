#include<iostream>
using namespace std;
class math{
    public:
        int r1,i1;
        int getdata(){
            cout<<"enter your real number :-";
            cin>>r1;
            cout<<"enter your imaginary number :-";
            cin>>i1;
        }
        int putdata()
        {
            cout<<r1<<"(+)"<<i1<<"i"<<endl;
        }
        math operator+(math &d)
        {
            math temp;
            temp.r1=r1+d.r1;
            temp.i1=i1+d.i1;
            return temp;
        }
        math operator-(math &d)
        {
            math temp;
            temp.r1=r1-d.r1;
            temp.i1=i1-d.i1;
            return temp;
        }
        math operator*(math &d)
        {
            math temp;
            temp.r1=(r1*d.r1)-(i1*d.i1);
            temp.i1=(r1*d.i1)+(i1*d.r1);
            return temp;
        }
        math operator/(math &d)
        {
            math temp;
            temp.r1=(r1*d.r1 + i1*d.i1)/(d.r1*d.r1+d.i1*d.i1);
            temp.i1=(i1*d.r1-r1*d.i1)/(d.r1*d.r1+d.i1*d.i1);
            return temp;
        }
        math operator !()
        {   
            math temp;
            temp.r1=-r1;
            temp.i1=-i1;
            return temp;
        }
};
int main()
{
    math a,b,c;
    a.getdata();
    b.getdata();
    int n;
    cout<<"choose operation "<<endl<<"(1)(+) addition"<<endl<<"(2)(-) substracion"<<endl<<"(3)(*) multiplication"<<endl<<"(4)(/) division"<<endl<<"(5)(!) negation"<<endl;
    cout<<"enter your choice :-";
    cin>>n;
    switch(n)
    {
        case 1:
            c=a+b;
            c.putdata();
            break;
        case 2:
            c=a-b;
            c.putdata();
            break;
        case 3:
            c=a*b;
            c.putdata();
            break;
        case 4:
            c=a/b;
            c.putdata();
            break;
        case 5:
            c=!a;
            c.putdata();
            c=!b;
            c.putdata();
            break;
        default :
            cout<<"enter valid case number";
            break;
    }
    cout<<"\n23AIML070_Siddhraj";
}