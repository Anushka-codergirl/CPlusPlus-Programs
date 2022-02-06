// Program to convert binary number to decimal and vice-versa
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int n,i,j,k,temp,sum=0;
   //Binary to decimal
   cout<<"Enter a binary number:";
   cin>>n;
   temp=n;
   i=1;
   while(temp!=0)
   {
      j=temp%10;
      temp=temp/10;
      k=j*i;
      sum=sum+k;
      i=i*2;
   }
   cout<<"\nDecimal number is:"<<sum;
   //Decimal to binary
   int m,r,binary=0,rem=0;
   cout<<"\nEnter a decimal number:";
   cin>>m;
   while(m!=0)
   {
      r=m%2;
      m=m/2;
      binary=binary+r*pow(10,rem);
      rem++;
   }
   cout<<"\nBinary number is:"<<binary;
   return 0;
}
