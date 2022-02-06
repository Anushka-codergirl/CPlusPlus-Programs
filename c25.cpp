// Program to calculate average of numbers using arrays
#include<iostream>
using namespace std;
int main()
{
   int a[10],i,n,sum=0;
   cout<<"Enter the number of elements:";
   cin>>n;
   cout<<"Enter the elements:";
   for(i=0;i<n;i++)
   {
      cin>>a[i];
   }
   //average of numbers using arrays
   for(i=0;i<n;i++)
   {
      sum=sum+a[i];
   }
   cout<<"\nAverage of numbers is:"<<sum/n;
   return 0;
}