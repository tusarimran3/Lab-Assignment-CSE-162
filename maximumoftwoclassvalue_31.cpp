//to show the maximum value between two class value
#include <bits/stdc++.h>
using namespace std;
class c2;  //forward decleration
class c1
{
    int x;
    friend void maximum(c1 ,c2 ); //friend function is called to access the both class private data

public:
    void setdata(int a)
    {
        x = a;
    }
    void display()
    {
        cout << x << endl;
    }
};
class c2
{
    int y;
     friend void maximum(c1, c2 );

public:
    void setdata(int b)
    {
        y = b;
    }
    void display()
    {
        cout << y << endl;
    }
};
 void maximum(c1 c, c2 d) // a maximum function is called to check the maximum values of two class
{
    c.x;
    d.y;
    if(c.x>d.y)
    {
        cout<<"class c1 value is maximum "<<c.x<<endl;
    }
    else{
        cout<<"class c2 value is maximum "<<d.y<<endl;
    }
}
int main()
{
    c1 ob;
    ob.setdata(300);
    ob.display();
   
    c2 ob2;
    ob2.setdata(60);
    ob2.display();

    maximum(ob,ob2);
    
}