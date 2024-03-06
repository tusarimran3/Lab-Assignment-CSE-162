//basic arithmatic operation
//using class and object
#include<bits/stdc++.h>
using namespace std;
class math             // class decleration
{
    public:
    //a function is called inside the class
    //to do arithmatic operation
    void operation(int x, int y) 
    {
        int sum;
        int mul;
        int sub;
        sum=x+y;
        mul=x*y;
        sub=x-y;
        cout<<"the sum is: "<<sum<<endl;
        cout<<"the multiplication is: "<<mul<<endl;
        cout<<"the sub is: "<<sub<<endl;
    }
};
int main()
{
    int a,b;
    cout<<"enter two number: "<<endl;
    cin>>a;
    cin>>b;
    math ob;            //object of the class is created
    ob.operation(a,b);
}
   



    


