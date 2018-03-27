#include<bits/stdc++.h>
using namespace std;

int main(){
	long int t,n,u,v,count;
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
   cin>>t;
   while(t--){
   	cin>>n;
   	count=n/10;
   //count=1000;
   long	int x[n],y[n],a[count],b[count],ac=-1,bc=-1;
   	for(int i=0;i<n;i++){
   		cin>>x[i]>>y[i];
	   }
	  // for(int i=0;i<n;i++){
   		//cout<<x[i]<<",,"<<y[i]<<endl;
	   //}
	   int f1=0;
	   for(int ii=0;ii<n-2;ii++){
	   	if(f1==1)
	   	break;
	   	for(int j=ii+2;j<n;j++){
	   		if(f1==1)
	   		break;
	   		if(ii==0 && j==n-1){
	   			continue;
			   }
			   else{
			   	int x1=x[ii],x2=x[j],y1=y[ii],y2=y[j];
			   	if(x1==x2){
		if(y1>y2){
		//	y2++;
			for(int i=y2+1;i<y1;i++){
				int f=0;
				for(int i1=0;i1<=ac;i1++){
					if(a[i1]==x1 && b[i1]==i){
						f=1;
						break;
					}
				}
				if(f==0){
				
				a[++ac]=x1;
				b[++bc]=i;
			//	cout<<a[ac]<<" "<<b[ac];
		/*	cout<<"x1:"<<x1<<" y1:"<<y1<<" x2:"<<x2<<" y2:"<<y2<<" ";
				cout<<a[ac]<<" "<<b[ac]<<"awe"<<endl;
				for(int ab=0;ab<n;ab++){
   		cout<<x[ab]<<",,"<<y[ab]<<endl;
	   }*/
				if(ac==count-1){
					f1=1;
					ii=n-2;
					j=n;
					break;
				}
			}
			}
		}
		else if(y1<y2){
		//	y1++;
			for(int i=y1+1;i<y2;i++){
				int f=0;
				for(int i1=0;i1<=ac;i1++){
					if(a[i1]==x1 && b[i1]==i){
						f=1;
						break;
					}
				}
				if(f==0){
				
				a[++ac]=x1;
				b[++bc]=i;
			//	cout<<a[ac]<<" "<<b[ac];
		/*	cout<<"x1:"<<x1<<" y1:"<<y1<<" x2:"<<x2<<" y2:"<<y2<<" ";
				cout<<a[ac]<<" "<<b[ac]<<"awe"<<endl;
				for(int ab=0;ab<n;ab++){
   		cout<<x[ab]<<",,"<<y[ab]<<endl;
	   }*/
				if(ac==count-1){
					f1=1;
					ii=n-2;
					j=n;
					break;
			}
			}
		}
	}
}
	else if(y1==y2){
		if(x1>x2){
		//	x2++;
			for(int i=x2+1;i<x1;i++){
				int f=0;
				for(int i1=0;i1<=ac;i1++){
					if(a[i1]==i && b[i1]==y1){
						f=1;
						break;
					}
				}
				if(f==0){
				
				a[++ac]=i;
				b[++bc]=y1;
			/*	cout<<"x1:"<<x1<<" y1:"<<y1<<" x2:"<<x2<<" y2:"<<y2<<" ";
				cout<<a[ac]<<" "<<b[ac]<<"Hello"<<endl;
				for(int ab=0;ab<n;ab++){
   		cout<<x[ab]<<",,"<<y[ab]<<endl;
	   }*/
				if(ac==count-1){
					f1=1;
					ii=n-2;
					j=n;
					break;
			}
			}
		}
	}
		else if(x1<x2){
		//	x1++;
			for(int i=x1+1;i<x2;i++){
				int f=0;
				for(int i1=0;i1<=ac;i1++){
					if(a[i1]==i && b[i1]==y1){
						f=1;
						break;
					}
				}
				if(f==0){
				
				a[++ac]=i;
				b[++bc]=y1;
	/*	cout<<"x1:"<<x1<<" y1:"<<y1<<" x2:"<<x2<<" y2:"<<y2<<" ";
				cout<<a[ac]<<" "<<b[ac]<<"Hello"<<endl;
				for(int ab=0;ab<n;ab++){
   		cout<<x[ab]<<",,"<<y[ab]<<endl;
	   }*/
				if(ac==count-1){
					f1=1;
					ii=n-2;
					j=n;
					break;
			}
			}
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

for (int xx = StartX+1; xx < EndX; ++xx)
{
    // solve for y
    float yy = (m * xx) + b1;

    // round to nearest int
    int rounded = (yy > 0.0) ? floor(yy + 0.5) : ceil(yy - 0.5);

    // convert int result back to float, compare
    if ((float) rounded == yy){
    	int f=0;
    	for(int i1=0;i1<=ac;i1++){
    		if(a[i1]==xx && b[i1]==rounded){
    			f=1;
    			break;
			}
		}
		if(f==0){
		
    	a[++ac]=xx;
				b[++bc]=(int)rounded;
			/*	cout<<"x1:"<<x1<<" y1:"<<y1<<" x2:"<<x2<<" y2:"<<y2<<" ";
				cout<<"Hii"<<a[ac]<<" "<<b[ac]<<endl;
				for(int ab=0;ab<n;ab++){
   		cout<<x[ab]<<",,"<<y[ab]<<endl;
	   }*/
				if(ac==count-1){
					f1=1;
					ii=n-2;
					j=n;
					break;
			}
	}
        
		//printf("(%d, %d)\n", x, rounded);
}


	}
			   }
		   }
	   }
   }
  /* for(int i=0;i<n;i++){
   		cout<<x[i]<<",,"<<y[i]<<endl;
	   }*/
   if(ac!=-1){
   	for(int h=0;h<=ac;h++){
   		cout<<a[h]<<" "<<b[h]<<"\n";
	   }
   }
   else cout<<-1<<"\n";
   
}
}
