//using refference variable
//to swap the value
#include<bits/stdc++.h>
using namespace std;
class swapp                       //class decleration
{
public:
    int a=200;
    int b=300;

    void after()                //function is called to see the value before swap
    {
    cout<<"before swap: "<<a<<endl;
    cout<<"before swap: "<<b<<endl;
    }
    void swap(int &x, int &y)      // using reference to swap the value
    {
    int tem;
    tem=x;
    x=y;
    y=tem;

        cout<<"after swap: "<<x<<endl;
        cout<<"after swap: "<<y<<endl;
    }
};
int main()
{
     int a=200;
    int b=300;
    swapp ob;               //object of the class created
    ob.after();
    ob.swap(a,b);
    return 0;
}


