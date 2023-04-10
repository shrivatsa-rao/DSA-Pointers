/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a=5;
    int *p=&a;// p is pointing to integer data and it is ponting to a.
    //sizeof pointer will be 8 or 4 bytes whether it might be string 
    //or integer. The size will be same for all datatypes.
    
    cout<<sizeof(p)<<endl;
     cout<<&a<<endl;//address of a
     //cout<<*a<<endl;//this is error.
     cout<<p<<endl;//p stores address of a
     cout<<&p<<endl;//address of p
     cout<<*p<<endl;//value at p
  
    return 0;
}
