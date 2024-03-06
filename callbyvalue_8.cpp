//call by value is a method of passing value into formal parameter
#include<bits/stdc++.h>
using namespace std;
void ref(int r)     //in call by value it will not change the value inside thecalling function
{
r=r+10000;
cout<<"after increment  "<<r<<endl;
}
int main()
{
    int n=5000;
    ref(n);            //function is called 
    cout<<"before increment"<<n<<endl;
return 0;
}

