#include <iostream>
#include<iomanip>
using namespace std;

class employee
{
 private:
    int id;
    string name;
    string qucalification;
    float experince;
    long long int con_number;
    static float avg_experince ;
    static int count;
protected :
    int get_id(){
        return id;
    }
    void getdata()
    {
        // cout<<"Enter the Employee Detail"<<endl;
        fflush(stdin);
        cout << "Enter the Employee ID:";
        cin >> id;
        cout << "Enter Empoyee Name:";
        getchar();
        getline(cin, name);
        cout << "Enter the Qucalification:";
        getline(cin, qucalification);
       // fflush(stdin);
        cout << "Enter Experince:";
        cin >> experince;
       // fflush(stdin);
        cout << "Enter the Contact Number:";
        cin >> con_number;
        avg_experince+=experince;
        count++;
        fflush(stdin);
    }

    void putdata() const
    {
        cout.width(20);
        cout<<left<<"Employee ID"<<":"<< id << endl;
        cout.width(20);
        cout<<left<<"Employee Name"<<":"<< name<<endl;
        cout.width(20);
        cout<<left<<"Qucalification"<<":"<<qucalification << endl;
        cout.width(20);
        cout<<left <<"Experince"<<":"<< experince << endl;
        cout.width(20);
        cout<<left<<"Contact Number"<<":"<< con_number<<endl;
    }
     int searchid(int empid){
        if(empid==id){
            return 1;
        }
        else{
            return 0;
        }
    }
    public:
      static void  experince_f(){
            cout<<"Average Experince of employee "<<avg_experince/count<<" years"<<endl;
    }
}e;
    float employee :: avg_experince;
    int employee :: count;
class non_teaching_emp:public employee{
    int salary;
    public:
    void getdata(){
        employee::getdata();
        cout<<"Enter the salary"<<endl;
        cin>>salary;
    }
    void putdata(){
        employee::putdata();
        cout.width(20);
        cout<<left<<"salary"<<":"<<salary<< endl;
    }
    int searchid(int eid){
            return employee::searchid(eid);

         }
};

class teaching_emp : public employee
{
    string designation;
    string spacialization;
    string pay_scale;

    public:
        void getdata(){
            employee::getdata();
            fflush(stdin);
            cout<<"Enter the designation"<<endl;
            getchar();
            getline(cin,designation);
            cout<<"Enter the spacialization"<<endl;
            getchar();
            getline(cin,spacialization);
            cout<<"Enter the pay_scale"<<endl;
            getchar();
            getline(cin,pay_scale);
            fflush(stdin);


        }
        void putdata(){
        employee::putdata();
        cout.width(20);
        cout<<left<<"Designation"<<":"<<designation<< endl;
        cout.width(20);
        cout<<left<<"spacialization"<<":"<<spacialization<< endl;
        cout.width(20);
        cout<<left<<"pay_scale"<<":"<<pay_scale<< endl;
        }

        int searchid(int eid){
            return employee::searchid(eid);

         }

};
int main()
{
    int n,i,tn,ntn;

    cout<<"Enter number teaching employee:";
    cin>>tn;
    teaching_emp te[tn];
    cout<<"Enter number non teaching employee:";
    cin>>ntn;
    non_teaching_emp nte[ntn];

    // cout << "Enter the number of Employee:";
    // cin >> n;
    // employee e[n];
    cout<<"Enter details of Teaching employee:"<<endl;
    for (int i = 0; i < tn; i++)
    {
       te[i].getdata();
    }
    cout<<"Enter details of Non-Teaching employee:"<<endl;
    for (int i = 0; i < ntn; i++)
    {
       nte[i].getdata();
    }
    char ch;
    int emp_id,g,flage=0;
    do
    {
        cout << "Enter Employee id which you check:"<<endl;
        cin >> emp_id;
        for ( i = 0; i < tn; i++)
        {
                g=te[i].searchid(emp_id);

                if(g==1){
                te[i].putdata();
                flage=1;
                break;
                }
            }
            if(flage==0){
                 for ( i = 0; i < ntn; i++)
              {
                g=nte[i].searchid(emp_id);

                if(g==1){
                nte[i].putdata();
                flage=1;
                }
            }
            }
            if(flage==0)
            {
                cout << "ERROR:ENTERED EMPLOYEE ID DOSE NOT EXIST"<<endl;

            }
        cout<<"Press Y for another Employee detail:";
        cin>>ch;


    }while(ch=='Y'||ch=='y');
    employee::experince_f();
    cout<<"23AIML070_Siddhraj";
}