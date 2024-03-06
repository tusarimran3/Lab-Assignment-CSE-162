#include<bits/stdc++.h>
using namespace std;
class student
{
    string name;
    string dept;
    int id;
    float cg;
    int number;
    public:
    inline void setvalue(string n, string d,int i, float c,int nmbr)
    {
       name=n;
       dept=d;
       id=i;
       cg=c;
       number=nmbr;
      
    }
    int getvalue()
    {

       cout<<"you are "<<name<<endl;
       cout<<"you are the student of department of "<<dept<<endl;
       cout<<"your student id is  "<<id<<endl;
       cout<<"your obtained cgpa is "<<cg<<endl;
       cout<<"your phone number is "<<number<<endl;
    }
};
int main()
{
     student ob1;
     string name;
    string dept;
    int id;
    float cg;
    int number;
    cout<<"enter your name: "<<endl;
    cin>>name;
 cout<<"enter your department: "<<endl;
    cin>>dept;
     cout<<"enter your student id : "<<endl;
    cin>>id;
    cout<<"enter your mobile number: "<<endl;
    cin>>number;
    cout<<"enter your obtained cgpa: "<<endl;
    cin>>cg;
   
    ob1.setvalue(name,dept,id,cg,number);
    ob1.getvalue( );
return 0;
}




