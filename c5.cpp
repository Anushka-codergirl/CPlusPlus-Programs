// Program to calculate sum of natural numbers

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of natural numbers from 1 to "<<n<<" is "<<sum;
    return 0;
}
