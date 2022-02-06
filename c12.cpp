// Program to calculate power of a number

#include<iostream>
using namespace std;
int main()
{
    int n,p,power=1;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter power:";
    cin>>p;
    for(int i=1;i<=p;i++)
    {
        power=power*n;
    }
    cout<<n<<" raised to power "<<p<<" is "<<power;
    return 0;
}
