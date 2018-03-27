#include <iostream>
#include <cmath>
using namespace std;
 
// Class to represent an Integral point on XY plane.
int main(){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int a[100],b[100],ac=-1,bc=-1;
	if(x1==x2){
		if(y1>y2){
			y2++;
			for(int i=y2;i<y1;i++){
				a[++ac]=x1;
				b[++bc]=i;
			}
		}
		else if(y1<y2){
			y1++;
			for(int i=y1;i<y2;i++){
				a[++ac]=x1;
				b[++bc]=i;
			}
		}
	}
	else if(y1==y2){
		if(x1>x2){
			x2++;
			for(int i=x2;i<x1;i++){
				a[++ac]=i;
				b[++bc]=y1;
			}
		}
		else if(x1<x2){
			x1++;
			for(int i=x1;i<x2;i++){
				a[++ac]=i;
				b[++bc]=y1;
			}
		}
	}
	else{
		//double s=(y1-y2)/(x1-x2);
		float m=0.0;
		int run = x1 - x2;
int rise = y1 - y2;
m = ((float) rise) / ((float) run);
float b1 = y1 - (m * x1);
int StartX,EndX;
if(x1>x2){
	StartX=x2;
	EndX=x1;
}
else{
	EndX=x2;
	StartX=x1;
}

for (int x = StartX+1; x < EndX; ++x)
{
    // solve for y
    float y = (m * x) + b1;

    // round to nearest int
    int rounded = (y > 0.0) ? floor(y + 0.5) : ceil(y - 0.5);

    // convert int result back to float, compare
    if ((float) rounded == y){
    	a[++ac]=x;
				b[++bc]=(int)rounded;
	}
        
		//printf("(%d, %d)\n", x, rounded);
}


	}
	for(int k=0;k<=ac;k++){
		cout<<a[k]<<"  ";
		cout<<b[k]<<endl;
	}
}
