#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#define RTT 5
using namespace std;
int main()
{
int window_size,i,f,frames[50];
cout<<"\n enter window size:";
cin>>window_size;
cout<<"\n enter the number of frames to be transmitted:";
cin>>f;
cout<<"\n enter"<<f<<"frames\n";
for(i=1;i<=f;i++)
{
    cin>>frames[i];
}
cout<<"\n after sending"<<window_size<<"frames at each stages sender waits for ack:";
cout<<"\n sending frames in following manner\n\n";
for(i=1;i<=f;i++)
{
    if(i%window_size!=0)
    {
        cout<<"\n"<<frames[i];
    }
    else
    {
        cout<<"\n<<frames[i]";
        cout<<"\n sender:waiting for ack\n\n";
        Sleep(RTT/2);
        cout<<"\n receiver:frames received,ack sent\n\n";
        Sleep(RTT/2);
        cout<<"\n sender:ack received,sending frames\n";
    }
}
if(f%window_size!=0)
    {
        cout<<"\n<<frames[i]";
        cout<<"\n sender:waiting for ack\n\n";
        Sleep(RTT/2);
        cout<<"\n receiver:frames received,ack sent\n\n";
        Sleep(RTT/2);
        cout<<"\n sender:ack received";
    }
    getch();
}
