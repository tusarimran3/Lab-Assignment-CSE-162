#include<bits/stdc++.h>
using namespace std;
int main()
{
int a;
cout<<"ENTER ANY NUMBER: ";
cin>>a;
int *b;     //DECLERATION OF POINTER
b=&a;//stores the address of number variable    
cout<<"Address of a variable is:"<<&a<<endl;    
cout<<"Address of b variable is:"<<b<<endl;    
cout<<"Value of b variable is:"<<*b<<endl;    
   return 0;
}




