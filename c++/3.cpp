#include<iostream>
#include<string.h>
using namespace std;
class car
{
    public :
        string m,ft,tm,ab;
        float sp,mi,tc;
        int sc;
        void in();
        void dis();
        void mn()
        {
            cout<<m<<endl;
        }
        void ft1(int f)
        {
            if(f==1 && ft=="petrol" )
            {
                dis();
            }
            else if(f==2 && ft=="diesel")
            {
                dis();
            }
            if(f==3 && ft=="cng" )
            {
                dis();
            }
            else if(f==4 && ft=="electric" )
            {
                dis();
            }
        }
        void map(float f)
        {
            if(sp<=f)
            {
                dis();
            }
        }
};

void car::in()
{
    cout<<"\nenter your car name :-";
    cin>>m;
    cout<<"\nfuel type:-";
    cin>>ft;
    cout<<"\nenter show room price (lakhs) :-";
    cin>>sp;
    cout<<"\nenter mileage (km/l) :-";
    cin>>mi;
    cout<<"\nenter transmission :-";
    cin>>tm;
    cout<<"\nenter tank capacity :-";
    cin>>tc;
    cout<<"\nenter seating capacity :-";
    cin>>sc;
    cout<<"\nif it has airbags enter yes otherwise enter no :-";
    cin>>ab;
    cout<<"******************************************************";
}

void car::dis()
{
    cout<<"\ncar name:-"<<m;
    cout<<"\nfuel type:-"<<ft;
    cout<<"\nshow room price (lakhs) :-"<<sp;
    cout<<"\nmileage (km/l) :-"<<mi;
    cout<<"\ntransmission :-"<<tm;
    cout<<"\ntank capacity :-"<<tc;
    cout<<"\nseating capacity :-"<<sc;
    cout<<"\nairbags:-"<<ab;
}

int main()
{
    int x,n;
    car a[100];
    cout<<"how many car data you want to enter:-";
    cin>>x;
    fflush(stdin);
    for(int i=1;i<=x;i++)
    {
        a[i].in();
    }

    system("cls");
    cout<<"(1)model name"<<endl<<"(2)fuel type"<<endl<<"(3)price range\n";
    cout<<"enter your opition:-";
    cin>>n;
    
    switch(n)
    {
        case 1:
        {   
            int m;
            for(int i=1;i<=x;i++)
            {
               cout<<"("<<i<<")";
               a[i].mn();
            }  
            cout << "choose your car to get details :-";
            cin>>m;
            a[m].dis();
            break; 
        }
        case 2:
        {   
            int m;
            cout<<"(1)petrol  (2)diesel (3)cng (4)electric";
            cout<<"\nenter fuel type you want:-";
            cin>>m;
            for(int i=1;i<=x;i++)
            {   
                a[i].ft1(m);
            } 
            break;
        }

        case 3:
        {   
            float f;
            cout<<"enter your maximum afordable range in lakhs";
            cin>>f;
            for(int i=1;i<=x;i++)
            {
                a[i].map(f);
            }
            break;
        }
    }
    cout<<"\n23AIML070_Siddhraj";
}