#include<bits/stdc++.h>
using namespace std;
class number
{
    int a,b;
    public:
    void setnumber(int x,int y)
    {
        a=x;
        b=y;
    }
    friend number sumcomplex(number o1,number o2); 
    // here sumcomplex are not the member function of the class 
// but sumcomplex is friend function of the class so it can access the private variable
    void printnumber()
    {
        cout<<"your number is "<<a<<" +"<<b<<"i"<<endl;;
    }

};
/*number sumcomplex(number o1,number o2)
{
    number o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b)); //    it will show  compiler error because you cant access the private data 
    return o3;
}*/
number sumcomplex(number o1,number o2)
{
    number o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b)); 
    return o3;
}
int main()
{
    number c1,c2,sum;
    c1.setnumber(1,4);
    c1.printnumber();

    c2.setnumber(8,4);
    c2.printnumber();

    sum=sumcomplex(c1,c2);
    sum.printnumber();
    return 0;
}