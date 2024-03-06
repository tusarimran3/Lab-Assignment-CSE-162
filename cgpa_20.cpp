// calculate cgpa
#include <bits/stdc++.h>
using namespace std;

class cgpa
{
public:
    int a;
    void showcredit()
    {

        cout << "Enter the total number of course: " << endl;
        cin >> a;
        float credit[a];            // total creddit of a course
        float gpa[a];               // obtained gpa per course
        for (int i = 0; i < a; i++) // loop for taking input og the credit and obtained gpa
        {
            cout << "enter the credit of the course " << i + 1 << " is: " << endl;
            cin >> credit[i];
            cout << "enter the obtained gpa  of the course " << i + 1 << " is: " << endl;
            cin >> gpa[i];
        }
        float c = 0; // c=credit of the course
                     //  the loop is used for tha sum of total credit of the course
        for (int j = 0; j < a; j++)
        {
            c = c + credit[j];
        }
        float op = 0, neat;
        // op represents obtained point
        for (int k = 0; k < a; k++) // loop is used to obtained grade point
        {
            op = op + (credit[k] * gpa[k]);
        }
        float result = op / c;
        cout << "your obtained cgpa is: " << result;
    }
};
int main()
{
    cgpa ob;
    ob.showcredit();
    return 0;
}
