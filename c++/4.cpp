#include<iostream>
#include<cmath>
using namespace std;
float area(float r);
float area(float a,float b);
float area(float i,float j,float k);

int main()
{   
    int n;
    cout<<"which area you want?\n";
    cout<<"(1)circle"<<endl<<"(2)rectangle"<<endl<<"(3)cuboid\n";
    cin>>n;

    switch (n)
    {
        case 1:
        {
            float r;
            cin>>r;
            cout<<area(r);
            break;
        }
        case 2:
        {
            float a,b;
            cin>>a>>b;
            cout<<area(a,b);
            break;
        }
        case 3:
        {
            float i,j,k;
            cin>>i>>j>>k;
            cout<<area(i,j,k);
            break;
        }
    }
    cout<<"\n23AIML070_Siddhraj";
}

float area(float r)
{
    return 3.14*r*r;
}
float area(float a, float b)
{
    return a*b;
}
float area(float i,float j, float k)
{
    return 2*(i*j+j*k+k*i);
}