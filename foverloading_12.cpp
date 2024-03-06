// function overloading is the function that has the
// same name but different parameters
#include<bits/stdc++.h>
using namespace std;
int  add(int a,int b) //funtion name same but parametrs are different
{
    return a+b;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
int add(int a,float b, double c)
{
    return a+b+c;
}
int main()
{
 cout<<add(10,20)<<endl;
cout<< add(200,100,5)<<endl;
 cout<<add(10,4.5,6.57)<<endl;
return 0;
}
