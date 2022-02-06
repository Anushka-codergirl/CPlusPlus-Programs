// Program to display prime numbers between two intervals

#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"Enter two numbers:";
   cin>>a>>b;
   for(int i=a;i<=b;i++)
   {
      c=0;
      for(int j=2;j<=i/2;j++)
      {
         if(i%j==0)
         {
            c=1;
            break;
         }
      }
      if(c==0)
      {
         cout<<i<<" ";
      }
   }
   cout<<"\n";
   
   return 0;
}
