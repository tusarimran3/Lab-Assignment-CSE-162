//Program to access the hidden value using the scope resolution (::) operator
#include <iostream>  
using namespace std;  
// declare global variable  
int num = 4000;  
int main ()  
{  
// declare local variable   
int num = 900;  
  
// print the value of the variables  
cout << " The value of the local variable num: " << num<<endl;  
  
// use scope resolution operator (::) to access the global variable   
cout << "The value of the global variable num: " << ::num;   
return 0;  
}  