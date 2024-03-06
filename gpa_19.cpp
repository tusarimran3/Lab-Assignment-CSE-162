#include<bits/stdc++.h>
using namespace std;
class student
{
    string name;
    string dept;
    int id;
    double marks;
public:
//setvalue function is called to set the value of private
// attribute of the class 
    void setvalue(string n,string d,int i,double m)  
    {
        name=n;
        dept=d;
        id=i;
        marks=m;
    }
    //setmarks function is called to check the marks
    void setmarks(double mar)
    {
        marks=mar;
        if(mar>=80)

        {
            cout<<"you obtained A+";
        }
      else if(mar>=70 &&mar<80)
      {
          cout<<"you obtained A";
      }
      else if(mar>=60 && mar<70)
      cout<<"you obtained A-";
      else if(mar>=50 && mar<60)
      cout<<"you obtained B";
      else if (mar>=40 && mar<50)
      cout<<"you obtained C";
      else if(mar>=0 && mar<40)
      cout<<"you are fail";
      else
      cout<<"invalid marks";

    }
    };
    int main()
    {
        student  ob; //object of the class
         string name;
    string dept;
    int id;
    double marks;
    cout<<"enter your name: ";
    cin>>name;
     cout<<"enter your department: ";
    cin>>dept;
     cout<<"enter your id: ";
    cin>>id;
     cout<<"enter your marks: ";
    cin>>marks;
    ob.setvalue(name,dept,id,marks);
    ob.setmarks(marks);
    return 0;

    }

