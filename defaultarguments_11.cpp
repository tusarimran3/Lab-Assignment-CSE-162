#include<bits/stdc++.h>
using namespace std;
// A function with deafault arguments
// it can be called with more arguments
int sum( int a, int b,int c=0, int d=0) //assigning default values to c and d
{
    return (a+b+c+d);
}
int main()
{
cout<<sum(10,20)<<endl;         //statement 1
cout<<sum(10,20,30)<<endl;      //statement 2
cout<<sum(10,20,30,40)<<endl;   //statement 3
return 0;
}