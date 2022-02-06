// Program to copy strings

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20],b[20];
    cout<<"Enter string1:";
    cin.getline(a,20);
    strcpy(b,a);
    cout<<"String1: "<<a;
	cout<<"String2: "<<b;
    return 0;
}
