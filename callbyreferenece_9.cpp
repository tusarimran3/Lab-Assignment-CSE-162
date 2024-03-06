//call by reference is a method of paasing argument by cpying the address into formaal parameter
#include<bits/stdc++.h>
using namespace std;
void ref(int& r)   //in call by reference it will  change the value inside the calling function
{
r=r+10000;
cout<<"after increment  "<<r<<endl;
}
int main()
{
    int n=500;
    ref(n);   //function is called
    cout<<"before increment"<<n<<endl;
return 0;
}

