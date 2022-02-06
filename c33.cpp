// Program to find the length of a string

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string:";
    cin>>str;
    cout<<"\nLength of the string is:"<<strlen(str);
    return 0;
}
