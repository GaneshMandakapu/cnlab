#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
return(a);
}

int main()
{
double p=3,q=5,m;
double n=p*q;
double e=3;
double phi=(p-1)*(q-1);
while(e<phi)
{
    if(gcd(e,phi)==1)
        break;
    else
        e++;
}
int k=5;
double d=(1+(k*phi))/e;
cout<<"\n\n input message data=";
cin>>m;
double c=fmod((pow(m,e)),n);
cout<<"\n\n cipher data="<<c<<"\n";
m=fmod((pow(c,e)),n);
cout<<"\n\n original data="<<m<<"\n";
return 0;
}
