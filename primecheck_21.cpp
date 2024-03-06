#include<bits/stdc++.h>
using namespace std;
class number
{
public:
int a,b;
void primenumber(int n,int i)
{
    bool isprime=true;
    a=n;
    b=i;
    if(n==0 ||n==1)     //0,1 is not prime number
    {
        isprime=false;
    }
    for(i;i<=n/2;i++) //loop is used to check number
    {
        if(n%i==0)
        {
            isprime=false;
        break;
        }
    }
    if(isprime)
    cout<<n<<" is prime number";
    else
    cout<<n<<" is not prime number";
}
};
int main()
{
    int a,b;
     cout<<"ENTER YOUR NUMBER:  ";
    cin>>a;

    number ob;
    ob.primenumber(a,b=2);
    return 0;
}
