#include <iostream>  
using namespace std;  
int main()  
{  
int a=50; // variable initialization  
int b=7000; // variable initialization  
swap(a, b); // function calling  
cout << "value of a is :" <<a<< endl;  
cout << "value of b is :" <<b<< endl;  
return 0;  
}  
void swap(int &p, int &q) // function definition where p and q is reffered to  a and b
{  
int temp; // variable declaration  
temp=p;  
p=q;  
q=temp;  
}  