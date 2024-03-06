#include <bits/stdc++.h>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void setdata() // a function is called for set the value of private attributes
    {
        cout << "enter empolyee id ";
        cin >> id;
        cout << "enter employe salary ";
        cin >> salary;
    }
    void getdata() // getdata function is called to shuw the value that are set
    {
        cout << "your employee id is " << id << endl;
        cout << "your salary is " << salary << endl;
    }
};
int main()
{
    employee tesla[4];          // objects are declared as a arrays argument
    for (int i = 0; i < 4; i++) // for loop is used to initialize the array
    {
        tesla[i].setdata();
        tesla[i].getdata();
    }
}
