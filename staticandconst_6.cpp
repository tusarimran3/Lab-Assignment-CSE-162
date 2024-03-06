#include<bits/stdc++.h>
using namespace std;
class keyword
{
    public:
    //the keyword const represent the value of a variable is can not be changed

    const int b=5;  //here const variable is b
     //static in a class means that the object
     //has a global lifetime

    static void showstatic(int x ) //function is declare for static member
    {
        cout<<"STATIC keyword is:  "<<x<<endl;
    }
    void showconst()
    {
        cout<<"const variable is: "<<b<<endl;
    }
};
int main()
{
keyword ob;
keyword::showstatic(10); // as static variable are globally accesible so scope resolution operator is used to make it local
ob.showconst();
return 0;

    
}


