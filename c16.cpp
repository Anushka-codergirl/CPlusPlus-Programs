// Program to check armstrong number

#include<iostream>
using namespace std;
int main()
{
   int n, temp, sum=0;
   cout<<"Enter a number:";
   cin>>n;
   temp=n;
   while(temp!=0)
   {
      sum=sum+(temp%10)*(temp%10)*(temp%10);
      temp=temp/10;
   }
   if(sum==n)
   {
      cout<<n<<" is an Armstrong number";
   }
   else
   {
      cout<<n<<" is not an Armstrong number";
   }
   return 0;
}
