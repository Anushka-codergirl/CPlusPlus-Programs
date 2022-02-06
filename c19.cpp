// Program to make a simple calculator to add, subtract, multiply or divide using switch.....case
#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   char ch;
   cout<<"Enter two numbers:";
   cin>>a>>b;
   cout<<"Enter an operator:";
   cin>>ch;
   switch(ch)
   {
      case '+':
         c=a+b;
         break;
      case '-':
         c=a-b;
         break;
      case '*':
         c=a*b;
         break;
      default:
         cout<<"Invalid operator";
   }
   cout<<"\n"<<a<<ch<<b<<"="<<c;
   return 0;
}