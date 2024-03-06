// static member has the only one copy in the class
// static member is shared by all the object of the class
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
        cout << "the employee id is " << id << " this is employee number " << count << endl;
    }
};
int employee::count = 1000; // default value is zero
                            //   we can give the value of static variable is here
int main()
{
    employee tusar, rohan, robi; // static variable is easily accesed by many object of the class
    tusar.setdata();
    tusar.getdata();

    rohan.setdata();
    rohan.getdata();

    robi.setdata();
    robi.getdata();
}