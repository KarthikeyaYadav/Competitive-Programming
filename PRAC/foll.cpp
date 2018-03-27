#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int n,m=0,p,i=0,j=0;
char a[10][10],followResult[10];
void follow(char c);
void first(char c);
void addToResult(char);
int main()
{
 int i;
 int choice;
 char c,ch;
 //clrscr();
 printf("Enter the no.of productions: ");
scanf("%d", &n);
 printf(" Enter %d productions\nProduction with multiple terms should be give as separate productions \n", n);
 for(i=0;i<n;i++){
 
  scanf("%s%c",a[i],&ch);
  cout<<a[i]<<"\nhello  \n "<<ch<<"\n";
}
    do
 {
  m=0;
  printf("Find FOLLOW of -->");
  scanf(" %c",&c);
  follow(c);
  printf("FOLLOW(%c) = { ",c);
  for(i=0;i<m;i++)
   printf("%c ",followResult[i]);
  printf(" }\n");
  printf("Do you want to continue(Press 1 to continue....)?");
 scanf("%d",&choice);
 }
 while(choice==1);
}
void follow(char c)
{
    if(a[0][0]==c){
	cout<<"\nHi\n";
		addToResult('$');
}
 for(i=0;i<n;i++)
 {
  for(j=2;j<strlen(a[i]);j++)
  {
   if(a[i][j]==c)
   {
    if(a[i][j+1]!='\0')first(a[i][j+1]);
    if(a[i][j+1]=='\0' && c!=a[i][0]){
	cout<<"\nfollow of "<<a[i][0]<<"\n";
     follow(a[i][0]);
 }
   }
  }
 }
}
void first(char c)
{
      int k;
                 if(!(isupper(c))){
				 
       /*f[m++]=c;  */
       cout<<c<<" HELLO";
                     addToResult(c);
                 }
                 for(k=0;k<n;k++)
                 {
                 if(a[k][0]==c)
                 {
                 if(a[k][2]=='#') follow(a[i][0]);
                 else if(islower(a[k][2]))addToResult(a[k][2]);
                 else first(a[k][2]);
                 }
                 }
}
void  addToResult(char c)
{
    int iii;
    for( iii=0;iii<=m;iii++)
        if(followResult[iii]==c)
            return;
   followResult[m++]=c;
   cout<<"\nm:"<<m<<"\n";
} 
