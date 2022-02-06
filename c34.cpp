// Program to concatenate two strings

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20],b[20],c[40];
    cout<<"Enter the first string:";
    cin>>a;
    cout<<"Enter the second string:";
    cin>>b;
    strcpy(c,a);
    strcat(c,b);
    cout<<"Concatenated string is:"<<c;
    return 0;
}
