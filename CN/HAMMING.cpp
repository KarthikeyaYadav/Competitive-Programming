#include<iostream>
#include<conio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int b[11],i,r1,r2,r3,r4,a,x=0,r=0;
//clrscr();
cout<<"enter 11bit code";
for(i=0;i<11;i++)
cin>>b[i];
int c[6]={0,2,4,6,8,10};
int d[6]={1,2,5,6,9,10};
int e[4]={3,4,5,6};
int f[4]={7,8,9,10};
for(i=0;i<6;i++)
{
int g=c[i];
if(b[g]==1)
{
r=r+1;
}
}
r1=func(r);
r=0;
for(i=0;i<6;i++)
{
int g=d[i];
if(b[g]==1)
{
r=r+1;
}
}
r2=func(r);
r=0;
for(i=0;i<4;i++)
{
if(b[g]==1)
{
r=r+1;
}
}
r3=func(r);
r=0;
for(i=0;i<4;i++)
{
int g=f(i);
if(b[g]==1)
{
r=r+1;
}
r4=func(r);
int k[4]={r1,r2,r3,r4};
for(i=0;i<4;i++)
x=((pow(2,i)*k[i]+x);
if(x==0)
cout<<"no error\n";
else
cout<<"there isan error at position"<<x;
getch();
}
int(a%2==0)return0;
else
rerturn 1;
}
