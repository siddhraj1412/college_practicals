#include<iostream>
using namespace std;
class emp{
public:
    double cn;
    float exp,i=0;
    int id;
    string qua,en;
    int getdata(){
           cout<<"\nenter employee number:-";
         cin>>cn;

    okay:
        cout<<"\nenter employee id:-";
        cin>>id;
        if(id<9999 && id>999)
        {
            cout<<"\nvalid";
        }
        
        else
        {
            cout<<"invalid\n";
            cout<<"Enter valid id!\n";
            goto okay;
        }
        cout<<"\nenter employee name:-";
        cin.ignore();
        getline(cin,en);
        cout<<"\nenter qualification of employee :-";
        cin>>qua;
        cout<<"\nenter experience of employee :-";
        cin>>exp;
        cout<<"\n**************************************";
    }
    int display();
    int expi();
};
int main()
{
    emp a[100];
    int n;
    cout<<"how many employee detail you want to enter :-";
    cin>>n;
    float avg;
    for (int i=0;i<n;i++)
    {
        
        a[i].getdata();
        
    }
    for (int i=0;i<n;i++)
    {
        char q;
        cout<<"\npress Y to get another employee id:-";
        cin>>q;
        ok:
        if(q=='y'||q=='Y')
        {
            int id1;
            okay:
            cout<<"\nenter employee id:-";
            cin>>id1;
            if(id1<9999 && id1>999)
        {
            cout<<"\nvalid";
        }
        
        else
        {
            cout<<"invalid\n";
            cout<<"Enter valid id!\n";
            goto okay;
        } 
            for (int i=0;i<n;i++) 
            {   
                if(id1==a[i].id)
                {
                    a[i].display();
                }
            }    
        }
    } 
    for(int i=0;i<n;i++)
    {
        avg+=a[i].expi();
    }
    cout<<"\nThe average employee experience is :-"<<avg/n;

    cout<<"23AIML070_Siddhraj";
}

int emp::display()
{
    
      cout<<"\nemployee number :-"<<cn;
        cout<<"\nemployee id :-"<<id;
       cout<<"\nemployee name:-"<<en;  
       cout<<"\nqualification of employee:-"<<qua;
     cout<<"\nexperience of emplyoee :-"<<exp;
       
       

}
int emp::expi()
{
   
    return exp;
}