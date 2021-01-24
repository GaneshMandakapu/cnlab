#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
char ch,a[20];
int count=0,i=0,j=0;
cout<<"\n enter data:"<<endl;
while((ch=getche())!='\r')
    {
        if(ch=='1')
        ++count;
        else
        count=0;
        a[i++]=ch;
        if(count==5)
        {
            a[i++]='0';
            count=0;
        }
    }
cout<<"\n stuffed data:";
for(j=0;j<i;++j)
    {
        cout<<a[j];
    }
    getch();
}
