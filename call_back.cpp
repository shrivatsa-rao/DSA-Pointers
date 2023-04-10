/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void fun(int *p)
{
    p=p+1;//here it will update suppose p=100 then p=100+1*4=104.
    ///but it will not updatein main function because it is callback function.
    //here only address is changed but it will not reflect in main function.
}

int main()
{
    int a=5;
    int *p=&a;
    cout<<"before"<<p<<endl;
    cout<<"before"<<*p<<endl;//same address and same value
    fun(p);
    
     cout<<"after"<<p<<endl;
    cout<<"after"<<*p<<endl;//same address and same value

    return 0;
}
