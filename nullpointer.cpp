/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
//this is null pointer. here it is pointing to zero then we are assigining
//to a. this is a good way of doing the pointer.
int main()
{
    int a=5;
    int *p=0;
    p=&a;
    cout<<*p;

    return 0;
}
