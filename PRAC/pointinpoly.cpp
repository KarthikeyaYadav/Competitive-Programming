// A C++ program to check if a given point lies inside a given polygon
// Refer https://www.geeksforgeeks.org/check-if-two-given-line-segments-intersect/
// for explanation of functions onSegment(), orientation() and doIntersect()
#include<bits/stdc++.h>
using namespace std;
 
// Define Infinite (Using INT_MAX caused overflow problems)
//#define INF 100000000
int INF=100000001;
 

struct Point
{
	int x;
	int y;
};

// Given three colinear points p, q, r, the function checks if
// point q lies on line segment 'pr'
bool onSegment(Point p, Point q, Point r)
{
	if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
			q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
		return true;
	return false;
}

// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are colinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int orientation(Point p, Point q, Point r)
{
	int val = (q.y - p.y) * (r.x - q.x) -
			(q.x - p.x) * (r.y - q.y);

	if (val == 0) return 0; // colinear
	return (val > 0)? 1: 2; // clock or counterclock wise
}

// The function that returns true if line segment 'p1q1'
// and 'p2q2' intersect.
bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
	// Find the four orientations needed for general and
	// special cases
	int o1 = orientation(p1, q1, p2);
	int o2 = orientation(p1, q1, q2);
	int o3 = orientation(p2, q2, p1);
	int o4 = orientation(p2, q2, q1);

if(o1==0)
	return false;
	// General case
	if (o1 != o2 && o3 != o4)
		return true;

	// Special Cases
	// p1, q1 and p2 are colinear and p2 lies on segment p1q1
	if (o1 == 0 && onSegment(p1, p2, q1)) return true;

	// p1, q1 and p2 are colinear and q2 lies on segment p1q1
	if (o2 == 0 && onSegment(p1, q2, q1)) return true;

	// p2, q2 and p1 are colinear and p1 lies on segment p2q2
	if (o3 == 0 && onSegment(p2, p1, q2)) return true;

	// p2, q2 and q1 are colinear and q1 lies on segment p2q2
	if (o4 == 0 && onSegment(p2, q1, q2)) return true;

	return false; // Doesn't fall in any of the above cases
}

// Returns true if the point p lies inside the polygon[] with n vertices
bool isInside(Point polygon[], int n, Point p)
{
	// There must be at least 3 vertices in polygon[]
	if (n < 3) return false;

	// Create a point for line segment from p to infinite
	Point extreme = {INF, p.y};

	// Count intersections of the above line with sides of polygon
	int count = 0, i = 0,flag=0;
	do
	{
		int next = (i+1)%n;

		// Check if the line segment from 'p' to 'extreme' intersects
		// with the line segment from 'polygon[i]' to 'polygon[next]'
		if (doIntersect(polygon[i], polygon[next], p, extreme))
		{
			// If the point 'p' is colinear with line segment 'i-next',
			// then check if it lies on segment. If it lies, return true,
			// otherwise false
			if (orientation(polygon[i], p, polygon[next]) == 0)
			return !onSegment(polygon[i], p, polygon[next]);

			//cout<<polygon[i].x<<" "<<polygon[i].y<<" hiii "<<polygon[next].x<<" "<<polygon[next].y<<endl;
            count++;
            if(p.y==polygon[i].y || p.y==polygon[next].y)
            flag=1;
            //cout<<count<<endl;
		}
		i = next;
	} while (i != 0);
if(flag==1 && count%2==1)
return 0;
	// Return true if count is odd, false otherwise
	return count&1; // Same as (count%2 == 1)
}
 
// Driver program to test above functions
int main()
{
	long int t,n,u,v,count;
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
   cin>>t;
   while(t--){
   	cin>>n;
   	count=n/10;
   	long int maxx=-1100000000,maxy=-1100000000,minx=1100000000,miny=1100000000;
   	Point polygon1[n],p[count];
   	int c=-1,f=0;
   	for(int i=0;i<n;i++){
   		cin>>u>>v;
   		if(u>maxx)
   		maxx=u;
   		 if(u<minx)
   		 minx=u;
   		 if(v>maxy)
   		 maxy=v;
   		 if(v<miny)
   		 miny=v;
   		polygon1[i].x=u;
   		polygon1[i].y=v;
	   }
	   /*for(int i=0;i<n;i++){
   		
   	cout<<polygon1[i].x<<" "<<polygon1[i].y<<endl;
	   }*/
	   int nn = sizeof(polygon1)/sizeof(polygon1[0]);
	   for(long int xi=minx;xi<=maxx;xi++){
	   	for(long int yi=miny;yi<=maxy;yi++){
	   		int ff=0;
	   		Point temp={xi,yi};
	   		for(int ip=0;ip<n;ip++){
	   			if(polygon1[ip].x==xi && polygon1[ip].y==yi){
	   				ff=1;
	   				break;
				   }
			   }
			   if(ff!=1){
			   
			   
	   		//cout<<xi<<" "<<yi<<endl;
	   	//	bool j=isInside(polygon1,nn,temp);
	   	//	cout<<j<<endl;
	   		if(isInside(polygon1,nn,temp)){
	   			int fff=0,o,nxt;
	   			for(int d=0;d<n;d++){
	   				nxt=d+1%n;
	   				o=orientation(polygon1[d],temp,polygon1[nxt]);
	   				if(o==0){
	   					fff=1;
	   					break;
					   }
				   }
				   if(fff==0){
				   
	   			c++;
	   			p[c].x=xi;
	   			p[c].y=yi;
	   		}
	   			if(c==count-1){
	   				xi=maxx+1;
	   				yi=maxy+1;
	   				f=1;
				   }
			   }
		}
		   }
	   }
	   if(f==0){
	   	cout<<-1<<"\n";
	   }
	   else{
	   	for(int q=0;q<count;q++){
	   		cout<<p[q].x<<" "<<p[q].y<<"\n";
		   }
	   }
   }
    /*Point polygon1[] = {{0, 0}, {10, 0}, {10, 10}, {0, 10}};
    int n = sizeof(polygon1)/sizeof(polygon1[0]);
    Point p = {-1,9};
    isInside(polygon1, n, p)? cout << "Yes \n": cout << "No \n";
 
   /* p = {5, 5};
    isInside(polygon1, n, p)? cout << "Yes \n": cout << "No \n";
 
    Point polygon2[] = {{0, 0}, {5, 5}, {5, 0}};
    p = {3, 3};
    n = sizeof(polygon2)/sizeof(polygon2[0]);
    isInside(polygon2, n, p)? cout << "Yes \n": cout << "No \n";
 
    p = {5, 1};
    isInside(polygon2, n, p)? cout << "Yes \n": cout << "No \n";
 
    p = {8, 1};
    isInside(polygon2, n, p)? cout << "Yes \n": cout << "No \n";
 
    Point polygon3[] =  {{0, 0}, {10, 0}, {10, 10}, {0, 10}};
    p = {-1,10};
    n = sizeof(polygon3)/sizeof(polygon3[0]);
    isInside(polygon3, n, p)? cout << "Yes \n": cout << "No \n";
    */
 
    return 0;
}
