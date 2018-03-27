#include<stdio.h>
#include<ctype.h>
#include<bits/stdc++.h>
using namespace std;
int n,m=0,p,i=0,j=0;
char a[10][10],followResult[10];
void follow(char c);
void first(char c);
void addToResult(char);
void FIRST(char[],char );
void addToResultSet(char[],char);
int numOfProductions;
//char productionSet[10][10];
main()
{
    int ii,in=-1,ff=0;
    char choice;
    char c;
    char result[20],nt[20];
    printf("How many number of productions ? :");
    scanf(" %d",&numOfProductions);
    n=numOfProductions;
    for(ii=0;ii<numOfProductions;ii++)/*read production string eg: E=E+T*/
    {
        printf("Enter productions Number %d : ",ii+1);
        scanf(" %s",a[ii]);
        //a[i]=productionSet[i];
        char ch=a[ii][0],chh=a[ii][2];
       // if(ch==chh){
        //	cout<<"\nLeft Recurssion is Present in the given grammar";
        //	exit(0);
	//	}
        if(ff=0){
        	ff=1;
        	nt[++in]=ch;
        	cout<<nt[in]<<"\n";
		}
        int flag=0;
        for(int i1=0;i1<=in;i1++){
        //	cout<<1;
        	if(nt[i1]==ch){
        		flag=1;
        		break;
			}
		}
		if(flag==0){
		
		nt[++in]=ch;
		cout<<nt[in]<<"\n";
	}
    }
   // for(int i3=0;i3<numOfProductions;i3++){
   // 	a[i3]=productionSet[i3];
//	}
    //do
    //{
        //printf("\n Find the FIRST of  :");
        //scanf(" %c",&c);
        for(int i2=0;i2<=in;i2++){
        	c=nt[i2];
        	FIRST(result,c); /*Compute FIRST; Get Answer in 'result' array*/
        printf("\n FIRST(%c)= { ",c);
        for(ii=0;result[ii]!='\0';ii++)
 printf(" %c ",result[ii]);       /*Display result*/
        printf("}\n");
        m=0;
       // printf("Find FOLLOW of -->");
  //scanf(" %c",&c);
  	c=nt[i2];
  follow(c);
  printf("FOLLOW(%c) = { ",c);
  for(ii=0;ii<m;ii++)
   printf("%c ",followResult[ii]);
  printf(" }\n");
		}
 
        // printf("press 'y' to continue : ");
        //scanf(" %c",&choice);
    }
   // while(choice=='y'||choice =='Y');
//}
/*
 *Function FIRST:
 *Compute the elements in FIRST(c) and write them
 *in Result Array.
 */
void FIRST(char* Result,char c)
{
    int i,j,k;
    char subResult[20];
    int foundEpsilon;
    subResult[0]='\0';
    Result[0]='\0';
    /*If X is terminal, FIRST(X) = {X}.*/
    if(!(isupper(c)))
    {
        addToResultSet(Result,c);
               return ;
    }
    /*If X is non terminal
    /Read each production*/
    for(i=0;i<numOfProductions;i++)
    {
/*Find production with X as LHS*/
        if(a[i][0]==c)
        {
/*If X =e is a production, then add e to FIRST(X).*/
 if(a[i][2]=='#') addToResultSet(Result,'#');
     /*If X is a non-terminal, and X = Y1 Y2 … Yk
            is a production, then add a to FIRST(X)
            if for some i, a is in FIRST(Yi),
     and e is in all of FIRST(Y1), …, FIRST(Yi-1).*/
      else
            {
                j=2;
                while(a[i][j]!='\0' && a[i][j]!=c)
                {
                foundEpsilon=0;
                FIRST(subResult,a[i][j]);
                for(k=0;subResult[k]!='\0';k++)
                    addToResultSet(Result,subResult[k]);
                 for(k=0;subResult[k]!='\0';k++)
                     if(subResult[k]=='#')
                     {
                         foundEpsilon=1;
                         break;
                     }
   /*No e found, no need to check next element*/
                 if(!foundEpsilon)
                     break;
                 j++;
                }
            }
    }
}
    return ;
}
/* addToResultSet adds the computed
 *element to result set.
 *This code avoids multiple inclusion of elements
  */
void addToResultSet(char Result[],char val)
{
    int k;
    for(k=0 ;Result[k]!='\0';k++)
        if(Result[k]==val)
            return;
    Result[k]=val;
    Result[k+1]='\0';
}
void follow(char c)
{
    if(a[0][0]==c)addToResult('$');
 for(int ji=0;ji<n;ji++)
 {
  for(int ij=2;ij<strlen(a[ji]);ij++)
  {
   if(a[ji][ij]==c)
   {
    if(a[ji][ij+1]!='\0')first(a[ji][ij+1]);
    if(a[ji][ij+1]=='\0'&&c!=a[ji][0])
     follow(a[ji][0]);
   }
  }
 }
}
void first(char c)
{
      int k;
                 if(!(isupper(c)))
       /*f[m++]=c;  */
                     addToResult(c);
                 for(k=0;k<n;k++)
                 {
                 if(a[k][0]==c)
                 {
                 if(a[k][2]=='#') follow(a[i][0]);
                 else if(islower(a[k][2]))
       /*f[m++]=a[k][2];    */
                     addToResult(a[k][2]);
                 else first(a[k][2]);
                 }
                 }
}
void  addToResult(char c)
{
    int iP;
   // for( iP=0;iP<=m;iP++)
      //  if(followResult[iP]==c && c!='$')
           // return;
   followResult[m++]=c;
} 
