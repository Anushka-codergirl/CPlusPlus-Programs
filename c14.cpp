// Program to check whether a number is prime or not

#include<iostream>
using namespace std;
int main()
{
    int n, flag=0;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    cout<<"\n";
    if(flag==0)
    {
        cout<<n<<" is a prime number";
    }
    else
    {
        cout<<n<<" is not a prime number";
    }
    return 0;
}