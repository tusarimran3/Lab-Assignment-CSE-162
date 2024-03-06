#include<bits/stdc++.h>
using namespace std;
class factorial
{
    public:
    int n;
    //int total;
    int  fact(int x) //function is called to determine factorial
    {
        n=x;
    if(x==1)        //base call to stop selfcalling
    return 1;
    else
    return x*fact(x-1); //recursive function
    }

};
int main()
{int n=4;
int  total;
    factorial ob;
   total=ob.fact(n);
   cout<<"the factorial is: "<<total<<endl;
    return 0;
}
   
