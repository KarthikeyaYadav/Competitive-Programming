#include<cstdio>
#include <iostream>
using namespace std;
struct Point
{
    int x;
    int y;
};
bool onSegment(Point p, Point q, Point r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
       return true;
 
    return false;
}
int orientation(Point p, Point q, Point r)
{
    
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);
 
    if (val == 0) return 0; 
 
    return (val > 0)? 1: 2; 
}

bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
    
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);
 
   
    if (o1 != o2 && o3 != o4)
       return true;
 
    
   if (o1 == 0 && onSegment(p1, p2, q1)) return true;
 
    
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
 
    
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
 
     
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;
 
    return false; 
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[m+1][n+1][n+1];
	int r[m+1],c[m+1];
	int max1=0,row,col,co=1;
	for(int i=1;i<=m;i++){
		max1=0;
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				scanf("%d",&a[i][j][k]);
				if(a[i][j][k]>max1){
				max1=a[i][j][k];
				row=j;
				col=k;
			}
			}
		}
		r[co]=row;
		c[co]=col;
		co++;
	}
//	for(int i=1;i<=m;i++)
//	printf("%d %d\n",r[i],c[i]);
int x[m+1],y[m+1];
x[1]=r[1];
y[1]=c[1];
x[2]=r[2];
y[2]=c[2];
int cind=2,lines=1;
for(int i=3;i<=m;i++){
	
	int z=2,c1=1,flag=0;
	float m1=(float)(y[cind]-y[cind-1])/(x[cind]-x[cind-1]);
	float m2=(float)(c[i]-y[cind])/(r[i]-x[cind]);
if(m2==m1 || m2==(-1*m1))
flag=1;
	for(int q=1;q<=lines-1;q++){
		struct Point p1={x[c1],y[c1++]}, q1={x[c1],y[c1]};
		struct Point p2={x[cind],y[cind]}, q2={r[i],c[i]};
	bool check=doIntersect(p1,q1,p2,q2);
	if(check==true){
		flag=1;
		break;
	}
	
}
if(flag==0){
	x[cind+1]=r[i];
	y[cind+1]=c[i];
	cind++;
	lines++;
}
else{
a[i][r[i]][c[i]]=0;
int max1=0,rr,cc,ab=1,hflag=0;
while(ab<=n*n){
ab++;
	for(int j=1;j<=n;j++){
		for(int k=1;k<=n;k++){
			if(max1<a[i][j][k]){
				max1=a[i][j][k];
				rr=j;
				cc=k;
			}
			
		}
	}
	if(max1==0){
	hflag=1;
	break;}
	c1=1,flag=0;
	float m1=(float)(y[cind]-y[cind-1])/(x[cind]-x[cind-1]);
	float m2=(float)(cc-y[cind])/(rr-x[cind]);
if(m2==m1 || m2==(-1*m1))
flag=1;
	for(int q=1;q<=lines-1;q++){
		struct Point p1={x[c1],y[c1++]}, q1={x[c1],y[c1]};
		struct Point p2={x[cind],y[cind]}, q2={rr,cc};
	bool check=doIntersect(p1,q1,p2,q2);
	if(check==true){
		flag=1;
		break;
	}
	
}
if(flag==1){
	a[i][rr][cc]=0;
}
else{
		x[cind+1]=r[i];
	y[cind+1]=c[i];
	cind++;
	lines++;
	hflag=1;
	break;
} 
	
}
if(hflag==0){
	x[cind+1]=-1;
	y[cind+1]=-1;
	cind++;
	break;
}
}
}
for(int i=1;i<=cind;i++)
	printf("%d %d\n",x[i],y[i]);
	return 0;
}
