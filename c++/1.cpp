#include<iostream>
using namespace std;
int grade_point(int m);
float cor_sgpa(int cp_sp,int be_sp,int pc_sp,int g1,int g2,int g3);
int main()
{
    int cp_sp=5,be_sp=4,pc_sp=2;
    
    string id,name;
    int semester,sum,n;
    int cp,be,pc;
    cout<<"enter student id :-";
    cin>>id;
    cout<<endl;
    cout<<"enter student name:-";
    cin>>name;
    cout<<endl;
    cout<<"enter semester no.:-";
    cin>>semester;
    cout<<endl;

    cout<<"enter marks of Computer programing :-";
    cin>>cp;
    cout<<endl;
    cout<<"enter marks of basics of electronics :-";
    cin>>be;
    cout<<endl;
    cout<<"Enter marks of professional communication :-";
    cin>>pc;
    cout<<endl;

    cout<<"student ID  :-"<<id<<endl;
    cout<<"student name:-"<<name<<endl;
    cout<<"semester    :-"<<semester<<endl;

    cout<<"computer programing     :-"<<cp<<endl;
    cout<<"basics of electronics   :-"<<be<<endl;
    cout<<"proffessional computing :-"<<pc;

    cout<<endl<<"grade "<<endl;

    cout<<"computer programing     :-" ;
    int g1=grade_point(cp);
    cout<<endl;
    cout<<"basics of electronics   :-";
    int g2=grade_point(be);
    cout<<endl;
    cout<<"proffessional computing :-";
    int g3=grade_point(pc);
    cout<<endl;

    float sgpa=cor_sgpa(cp_sp, be_sp, pc_sp, g1, g2, g3);
    cout<<"SGPA :-"<<sgpa;
    
    cout<<"\n23AIML070_Siddhraj";
    return 0;  
} 

float cor_sgpa(int cr1,int cr2,int cr3,int g1,int g2,int g3)
{
    float sgpa=((cr1*g1)+(cr2*g2)+(cr3*g3))/(cr1+cr2+cr3);
    return sgpa;
}

int grade_point(int m)
{       
     if(m>=80 && m<100)
        {   
            cout<<"AA";
            return 10;
        }
        else if(m>=73 && m<80)
        {
            cout<<"AB";
            return 9;
        }
        else if(m>=66&& m<73)
        {  
            cout<<"BB";
            return 8;
        }
        else if(m>=60 && m <=66)
        {
            cout<<"BC";
            return 7;
        }
        else if(m>=55 && m<60)
        {
            cout<<"cc";
            return 6;
        }
        else if(m>=50 && m<55)
        {
            cout<<"CD";
            return 5;
        }
        else if(m>=45 && m<50)
        {
            cout<<"DD";
            return 4;
        }
        else if(m<45)
        {
            cout<<"FF";
            return 0; 
        }
        else
        {
            cout<<"enter valid marks"<<endl;
            return -1;//to desplay error.
        }
}
