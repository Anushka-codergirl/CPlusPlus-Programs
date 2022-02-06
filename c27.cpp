//Program to add two matrix using multi-dimensional arrays
#include<iostream>
using namespace std;
int main()
{
   int a[2][2],b[2][2],c[2][2],i,j;
   cout<<"Enter the elements of first matrix:";
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
         cin>>a[i][j];
      }
   }
   cout<<"Enter the elements of second matrix:";
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
         cin>>b[i][j];
      }
   }
   //addition of two matrices
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
         c[i][j]=a[i][j]+b[i][j];
      }
   }
   cout<<"Sum of matrix is:"<<endl;
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
         cout<<c[i][j]<<" ";
      }
      cout<<endl;
   }
   return 0;
}