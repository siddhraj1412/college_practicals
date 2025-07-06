#include<iostream>
using namespace std;
class mcc;
class cmc;
class mcc{        
    public:
        double mm;
        mcc();
        mcc(cmc &b);
        double c();
        mcc(double l);
};
class cmc : public mcc{
    public:
        double cm;
        cmc();
        cmc(mcc &b);
        double p();
        cmc(double l);
};
mcc :: mcc(){
    mm=1;
}
mcc :: mcc (double l){
    mm=l;
}
mcc :: mcc (cmc &b){
    mm=b.mm;
}
double mcc :: c(){
    return (mm/10);
}
cmc :: cmc(){
    cm=1;
}
cmc :: cmc (double l){
    cm=l;
}
cmc :: cmc (mcc &b){
    cm=b.mm;
}
double cmc :: p(){
    return (cm*10);
}

int main(){
    cout<<"Convert millimeter to centimeter";
    cout<<"\nConvert centimeter to millimeter\n";
    int n;
    ok:
    cout<<"enter your choice :-";
    cin>>n;
    if(n==1){
            double n;
            cout<<"\nenter your number :-";
            cin>>n;
            mcc a(n);
            cout<<"measurement in cm is :-"<<a.c();
        }
    else if(n==2){
            double q;
            cout<<"\nenter your number :-";
            cin>>q;
            cmc b(q);
            cout<<"measurement in mm is :-"<<b.p();   
    
        }
    else{
        cout<<"enter valid option";
        goto ok;
    }
    cout<<"\n23AIML070_Siddhraj Thakor";
    return 0;
}