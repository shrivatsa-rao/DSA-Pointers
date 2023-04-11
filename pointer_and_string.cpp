/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   char ch[5]="abcd";
   char *p=ch;//u cannot put '&' for string intilaization.
   cout<<"string"<<p<<endl;//this will print the entire string until it finds 
   //the null character.it will print entire string.
   cout<<"string"<<*p<<endl;//prints only statring character
   
   char ck='F';
   char *x=&ck;//you have to include '&' for character.
   cout<<x<<endl;//this will print 'F' but after that also some values will
   //be printed becuse 
   cout<<*x<<endl;//prints only first letter

    return 0;
}
