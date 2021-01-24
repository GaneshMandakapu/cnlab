#include<iostream>
#include<stdio.h>
#include<time.h>
#include<windows.h>
#define bucketsize 1000
#define n 5
using namespace std;

void bucketoutput(int *bucket,int op)
{
    if(*bucket>0&&*bucket>op)
    {
        *bucket=*bucket-op;
    }
    else if(*bucket>0)
    {
        cout<<"\n remaining data output="<<*bucket;
        *bucket=0;
    }
}
int main()
{
    int op,newpack,oldpack=0,wt,i,j,bucket=0;
    cout<<"enter output rate:";
    cin>>op;
    for(i=1;i<=n;i++)
    {
        newpack=rand()%500;
        newpack=newpack+oldpack;
        wt=rand()%5;
        if(newpack<bucketsize)
            bucket=newpack;
        else
        {
            cout<<"\n"<<newpack<<"=the oldpack and newpack is greater than bucketsize reject";
            bucket=oldpack;
        }
cout<<"\n data in bucket="<<bucket;
cout<<"\n the next packet will arrive in ="<<wt<<"sec";
for(j=0;j<wt;j++)
{
    bucketoutput(&bucket,op);
    Sleep(1);
}
oldpack=bucket;
    }
    while(bucket>0)
        bucketoutput(&bucket,op);
    return 0;
}
