// Program to check prime number by creating a function
#include<iostream>
using namespace std;
int isPrime(int n)
{
   int i,c=0;
   for(i=2;i<=n/2;i++)
   {
      if(n%i==0)
      {
         c=1;
         break;
      }
   }
   if(c==0)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
int main()
{
   int n,c;
   cout<<"Enter a number:";
   cin>>n;
   c=isPrime(n);
   if(c==1)
   {
      cout<<n<<" is a prime number";
   }
   else
   {
      cout<<n<<" is not a prime number";
   }
   return 0;
}