#include<iostream>
using namespace std;
class literature
{
private:
    int id;
    string title;
protected:
    void getdata()
    {
        cout<<"Enter ID:";
        cin>>id;
        cout<<"Enter Title:";
        cin>>title;
    }
    void putdata()
    {
        cout<<endl<<"ID:"<<id;
        cout<<endl<<"Title:"<<title;
    }
};
class e_literature:public literature
{
private:
    string doi;
public:
    void getdata()
    {
        literature::getdata();
        cout<<"Enter DOI:";
        cin>>doi;
    }
    void putdata()
    {
        literature::putdata();
        cout<<endl<<"DOI:"<<doi;
    }
};
class hard_bound:public literature
{
private:
    int no_copy;
public:
    void getdata()
    {
        literature::getdata();
        cout<<"Enter number of copies:";
        cin>>no_copy;
    }
    void putdata()
    {
        literature::putdata();
        cout<<endl<<"Number of copies:"<<no_copy;
    }
};
class books_literature:public virtual e_literature,virtual hard_bound
{
private:
    int isbn;
    char c;
public:
    void getdata()
    {
        cout<<endl<<"(E)copy or (H)Hard bound :";
        cin>>c;
        if(c=='E'||c=='e')
        e_literature::getdata();
        else if(c=='H'||c=='h')
        hard_bound::getdata();
        cout<<"Enter ISBN:";
        cin>>isbn;
    }
    void putdata()
    {
        if(c=='E'||c=='e')
        e_literature::putdata();
        else if(c=='H'||c=='h')
        hard_bound::putdata();
        cout<<endl<<"ISBN:"<<isbn<<endl;
    }
}book[100];
class magazines_literature:public virtual e_literature,virtual hard_bound
{
private:
    int issn;
    char c;
public:
    void getdata()
    {
        cout<<endl<<"(E)copy or (H)ard bound :";
        cin>>c;
        if(c=='E'||c=='e')
        e_literature::getdata();
        else if(c=='H'||c=='h')
        hard_bound::getdata();
        cout<<"Enter ISSN:";
        cin>>issn;
    }
    void putdata()
    {
        if(c=='E'||c=='e')
        e_literature::putdata();
        else if(c=='H'||c=='h')
        hard_bound::putdata();
        cout<<endl<<"ISSN:"<<issn<<endl;
    }
}magazine[100];
int main()
{
    int n,b,m;
    char j;
    do{
    cout<<"ENTER 1: Add book data"<<endl;
    cout<<"ENTER 2: Add magazine data"<<endl;
    cout<<"ENTER 3: List all books"<<endl;
    cout<<"ENTER 4: List all magazines"<<endl;
    cin>>n;
    switch(n)
    {
    case 1:
        cout<<"******* Add book data *******"<<endl;
        cout<<"How many books data do you want to enter:";
        cin>>b;
        for(int i=0;i<b;i++)
        book[i].getdata();
        break;
    case 2:
        cout<<"******* Add magazine data *******"<<endl;
        cout<<"How many magazines data do you want to enter:";
        cin>>m;
        for(int i=0;i<m;i++)
        magazine[i].getdata();
        break;
    case 3:
        cout<<"******* List all books *******"<<endl;
        for(int i=0;i<b;i++)
        book[i].putdata();
        break;
    case 4:
        cout<<"******* List all magazine *******"<<endl;
        for(int i=0;i<m;i++)
        magazine[i].putdata();
        break;
    }
    for(int i=0;i<30;i++)
        cout<<"-";
    cout<<endl<<"Enter M to go to main menu . Press any key to exit:";
    cin>>j;
    cout<<endl;
    }while(j=='M'||j=='m');
    cout<<"\n23AIML070_Siddhraj";
}