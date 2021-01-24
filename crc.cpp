#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
char t[28],cs[28],g[30];
int i,a,j,N;
void axor()
{
    for(j=1;j<N;j++)
        cs[j]=((cs[j]==g[j])?'0':'1');
}
void crc()
{
    for(i=0;i<N;i++)
        cs[i]=t[i];
    do
{
    if(cs[0]='1')
        axor();
    for(j=0;j<N-1;j++)
        cs[j]=cs[j+1];
        cs[j]=t[i++];
}while(i<=a+N-1);
}
int main()
{
    cout<<"\n message to be send is:";
    cin>>t;
    cout<<"\n----------";
    cout<<"\n generating polynomial:";
    scanf("%s",&g);
    a=strlen(t);
    N=strlen(g);
    for(i=a;i<(a+N-1);i++)
        t[i]='0';
        cout<<"\n----------";
    cout<<"\n after appending zeros to message:";
    cout<<t;
    cout<<"\n--------";
    crc();
    cout<<"\n checksum:"<<cs;
    for(i=a;i<(a+N-1);i++)
        t[i]=cs[i-a];
        cout<<"\n--------";
    cout<<"\n final codeword(message + checksum) to be transmitted is:"<<t;
    cout<<"\n Enter received message:";
    cin>>t;
    cout<<"\n------";
    crc();
    cout<<"\n remainder:%s"<<cs;
    for(i=0;(i<N-1)&&(cs[i]!='1');i++);
    if(i<N-1)
        cout<<"\n\n Error detected\n\n";
    else
        cout<<"\n\n no error detected\n\n";
    getch();
}

