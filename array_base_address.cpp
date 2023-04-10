/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[]={1,2,3};//a stores the base address of the enitre array.
    cout<<a<<endl;///it gives the address of the first element.
    cout<<&a[0]<<endl;//this aslo gies the starting address.think that address of array is 100
    //then &a[0] gives the starting address of array.this is prints 100.
    cout<<*a<<endl;//gives the first element *(a+0);
    cout<<&a<<endl; //this is sefl reference pointer it is same as &a[0].
    //this is print the addres of the array. it will print 100.
    
    cout<<*(a+0);//baseaddress+0*sizeofdatatype.
    cout<<*(a+1)<<endl;//baseaddress+1*sizeofdatatype.100+1*4
    cout<<*(a+2)<<endl;//100+2*4;//i[a] can be written.*(i+a) also written
    

    return 0;
}
