#include<bits/stdc++.h>
using namespace std;
class number
{
    public:
    int x;
    int sum=0;
    int total;
    int series(int a)      //a function is called for show the sum of the series
    {
        x=a;
        
        for(int i=0;i<=a;i++)  //for loop use for printing natural number and their sum
        {
         sum=sum+i;
        }
    return sum;
    }
};
int main()
{
    int x;
    int sum=0;
    int total;
    cout<<"enter the last number of the number series: ";
    cin>>x;
    number ob;
    total=ob.series(x);
    cout<<"the summation of the number series is "<<total;
   return 0;
}