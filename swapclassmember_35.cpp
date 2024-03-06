//swap the private member of the class
#include <bits/stdc++.h>
using namespace std;
class c2;  //forward decleration
class c1
{
    int x;
    friend void exchange(c1 &,c2 &); //friend function is called to access the both class private data

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
     friend void exchange(c1 &,c2 &);

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
 void exchange(c1 &c, c2 &d) // a excahnge function is called to send reference or exchange the value of the class
{
    int temp=c.x;
    c.x=d.y;
    d.y=temp;
}
int main()
{
    c1 ob;
    ob.setdata(30);
   
    c2 ob2;
    ob2.setdata(60);

    exchange(ob,ob2);
    cout<<"the value after exchange is ";
     ob.display();
      cout<<"the value after exchange is ";
       ob2.display();
}