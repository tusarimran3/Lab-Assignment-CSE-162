#include<bits/stdc++.h>
using namespace std;
class basic //class decleration
{
    public: 
    //member of class
int x;
string name;
void takeinput()  //take input by declearing function
{
    cout<<"enter any number: "<<endl;
    cin>>x;
    cout<<"enter your name: "<<endl;
    cin>>name;
}
void show()             //take output by declearing function
{
    cout<<x<<endl;
    cout<<name<<endl;
}
};
int main()
{
    basic ob;  //declearing object of the class
    ob.takeinput();
    ob.show();
    return 0;
}
