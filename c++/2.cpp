#include<iostream>
#include<string.h>

using namespace std;
struct employee{
    int id;
    string name,qua;
    long long int cn;
    float exp;

}a[10];
int main()
{   int n;
    cout<<"How many employee detail you want :-";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        okay:
        cout<<"enter employee id:-";
        cin>>a[i].id;

        if(a[i].id<99999 && a[i].id>999)
        {
            cout<<"valid";
        }
        else
        {
            cout<<"invalid\n";
            cout<<"Enter valid id!\n";
            goto okay;
        }

        ok :
        cout<<"\nenter employee contact number:-";
        cin>>a[i].cn;
        if(a[i].cn<10000000000 && a[i].cn>999999999)
        {
            cout<<"valid\n";
        }
        else{
            cout<<"invalid\n";
            cout<<"enter valid contact number";
            goto ok;
        }

        cout<<"enter employee name:-";
        cin.ignore();
        getline(cin,a[i].name);

        cout<<"enter employee experience:-";
        cin>>a[i].exp;

        cout<<"enter employee qualification:-";
        cin>>a[i].qua;

        cout<<"\n***********************************\n";
    }

    for(int j=0; j<n ; j++){

    cout<<"\ndetail of employee "<<j+1<<endl;
    cout<<"Employee id:-"<<a[j].id<<endl;
    cout<<"Employee name :-"<<a[j].name<<endl;
    cout<<"employee experience :-"<<a[j].exp<<endl;
    cout<<"employee contact number :-"<<a[j].cn<<endl;
    cout<<"empolyee qualification :-"<<a[j].qua<<endl;
    printf("****************************\n");
    }

    cout<<"23AIML070_Siddhraj";
}