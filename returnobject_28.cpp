// show passing 0f object as argument
//and return of object
#include <bits/stdc++.h>
using namespace std;
class object
{
    int a, b;

public:
    int setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    // this funtion will take an object as argument
    // and return object to main
    int add(object o1, object o2)
    {
        o2.a=o1.a+o2.b;
        return o2.a;
        
    }

    void print()
    {
        cout << "your nmuber is " << a << " " << b << endl;
    }
};

int main()
{
    object c1, c2, c3; // creates object
    cout << "number before passing arguments " << endl;
    c1.setdata(30,40); // values are initilaized for both object
    c1.print();

    c2.setdata(70,100);
    c2.print();

    // passing object as an argument to function add
    cout << "number after returning argument of the object " << endl;
   cout<<c3.add(c1, c2);  //here the returning object will be stored
    
}