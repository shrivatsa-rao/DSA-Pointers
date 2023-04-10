/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void dum(int a[],int n)
{
    cout<<sizeof(a)<<endl;//this is 8 becuse only base address will be sent here
    //intsead of a[] we can write it has "*a".
}

int main()
{
    int a[]={1,2,3};
    dum(a,3);
     int *p=a;//u can write it as &a,
    cout<<*p;//the answer is 1.

    return 0;
}
