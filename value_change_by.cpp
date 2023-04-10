/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void fun(int *p)
{
    *p=*p+1;//here address will remain same but value will be changing
}

int main()
{
    int a=5;
    int *p=&a;
    cout<<"before"<<p<<endl;//for example p=1000
    cout<<"before"<<*p<<endl;//5
    fun(p);
    
     cout<<"after"<<p<<endl;//p=1000 address wont changwe
    cout<<"after"<<*p<<endl;//final value will be 6

    return 0;
}

