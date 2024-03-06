// static member has the only one copy in the class
// static member is shared by all the object of the class
// static function can only access the all static member
#include <bits/stdc++.h>
using namespace std;
class employee
{
    int id;
    static int count;
    // if we give the value of the variable of static member in decleration it will give error
    // declearing static data member here count is static data member
public:
    void setdata()
    {
        cout << "enter your employee id ";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout<<id;    //it will show error because id is not static member
        cout << "the employee id is " << id << " this is employee number " << count << endl;
    }
    static void getcount() // static function is created
    {
        cout << "the value of count is " << count << endl;
    }
};
int employee::count = 1000; // default value is zero
                            //   we can give the value of static variable is here
int main()
{
    employee tusar, rohan, robi; // static variable is easily accesed by many object of the class
    tusar.setdata();
    tusar.getdata();
    employee::getcount(); // static function only access the static member "count" of the employee class

    rohan.setdata();
    rohan.getdata();
    employee::getcount();

    robi.setdata();
    robi.getdata();
    employee::getcount();
}