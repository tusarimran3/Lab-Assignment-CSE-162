#include<bits/stdc++.h>
using namespace std;
class inf
{
    int a,b,sum,mul;
    public:
    void get();
    void add();
    void total();
};
inline void inf ::get()
{
    cout<<"enter two numbers:   ";
    cin>>a>>b;
}
inline void inf::add()
{
sum=a+b;
cout<<sum<<endl;
}
inline void inf::total()
{
mul=a*b;
cout<<mul<<endl;
}
int main()
{
inf ob;
ob.get();
ob.add();
ob.total();
return 0;

}



