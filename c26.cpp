// Program to find largest element of an array
#include<iostream>
using namespace std;
int main()
{
   int a[10],i,n,max;
   cout<<"Enter the number of elements:";
   cin>>n;
   cout<<"Enter the elements:";
   for(i=0;i<n;i++)
   {
      cin>>a[i];
   }
   max=a[0];
   for(i=1;i<n;i++)
   {
      if(a[i]>max)
      {
         max=a[i];
      }
   }
   cout<<"\nLargest element is:"<<max;
   return 0;
}