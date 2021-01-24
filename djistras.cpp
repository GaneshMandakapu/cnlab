#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#define infinity 999
using namespace std;
void dijkstras(int cost[10][10],int n,int src,int distance[10])
{
    int visited[10],min,u,i,j;
    for(i=1;i<=n;i++)
    {
        distance[i]=cost[src][i];
        visited[i]=0;
    }
    visited[src]=1;
    for(i=1;i<=n;i++)
    {
    min=infinity;
    for(j=1;j<=n;j++)
    if(visited[j]==0 && distance[j]<min)
    {
        min=distance[j];
        u=j;
    }
visited[u]=1;
for(j=1;j<=n;j++)
    if(visited[j]==0&&(distance[u]+cost[u][j]<distance[j]))
    distance[j]=distance[u]+cost[u][j];
    }
}

int main()
{
    int cost[10][10],distance[10],i,n,j,sum,dist,src;
    cout<<"\n enter the no of nodes:";
    cin>>n;
    cout<<"\n enter the cost matrix 0 self loop and 999 no edge connection:\n";
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    cin>>cost[i][j];
    cout<<"\n enter the source node";
    cin>>src;
    cout<<"\n enter the destination node";
    cin>>dist;
    dijkstras(cost,n,src,distance);
    cout<<"\n shortest distance from"<<src<<"to"<<dist<<"is"<<distance[dist];
    getch();
}
