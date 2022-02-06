// Program to generate multiplication table

    /*  5*1=5
        5*2=10
        5*3=15
        5*4=20
        5*5=25
        5*6=30
        5*7=35
        5*8=40
        5*9=45
        5*10=50
    */
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        j=n*i;
        cout<<n<<"*"<<i<<"="<<j<<"\n";
    }
    return 0;
}