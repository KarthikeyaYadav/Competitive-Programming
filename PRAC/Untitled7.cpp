#include<iostream>
#include<cstdio>
#include<math.h>
#include <iomanip>
using namespace std;
int main(){
	int t,n;
	scanf("%d",&t);
	std::cout << std::fixed;
	std::cout<<std::setprecision(9);
	while(t--){
		scanf("%d",&n);
		int y1[n],y2[n],y3[n],y4[n],h,g;
		int in1=-1,in2=-1,in3=-1,in4=-1;
		for(int i=0;i<n;i++){
			cin>>h>>g;
			//scanf("%lf %lf",&h,&g);
			if(h==1){
				y1[++in1]=g;
			}
			else if(h==2){
				y2[++in2]=g;
			}
			else if(h==3){
				y3[++in3]=g;
			}
			else if(h==4){
				y4[++in4]=g;
			}
		}
	/*	for(int i=0;i<=in1;i++){
			cout<<y1[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<=in2;i++){
			cout<<y2[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<=in3;i++){
			cout<<y3[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<=in4;i++){
			cout<<y4[i]<<" ";
		}
		cout<<endl;
		*/
		  long double d1,d2,d3,s=0,area=0,two=2.000000000000;
		
	/*	for(int i=0;i<in1-1;i++){
			for(int j=i+1;j<in1-1;j++){
				for(int k=0;k<in2;k++){
					if((y1[i]==y1[j]) || (y1[j]==y2[k]) || (y1[i]==y2[k])){
						
					}
					else{
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=(-1*(y1[j]-y1[i]))/two;
							if(area<0){
							    area=area*-1;
							}
							//cout<<"area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					}
				}
			}
		}
		for(int i=0;i<in1-1;i++){
			for(int j=i+1;j<in1-1;j++){
				for(int k=0;k<in3;k++){
					if((y1[i]==y1[j]) || (y1[j]==y3[k]) || (y1[i]==y3[k])){
						
					}
					else{
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=(-1*(y1[j]-y1[i]))/two;
							if(area<0){
							    area=area*-1;
							}
							//cout<<"area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					}
				}
			}
		}
		for(int i=0;i<in1-1;i++){
			for(int j=i+1;j<in1-1;j++){
				for(int k=0;k<in4;k++){
					if((y1[i]==y1[j]) || (y1[j]==y4[k]) || (y1[i]==y4[k])){
						
					}
					else{
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=(-1*(y1[j]-y1[i]))/two;
							if(area<0){
							    area=area*-1;
							}
							//cout<<"area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					}
				}
			}
		}
		for(int i=0;i<in2-1;i++){
			for(int j=i+1;j<in2-1;j++){
				for(int k=0;k<in1;k++){
					if((y2[i]==y2[j]) || (y2[j]==y1[k]) || (y2[i]==y1[k])){
						
					}
					else{
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=(-1*(y2[j]-y2[i]))/two;
							if(area<0){
							    area=area*-1;
							}
							//cout<<"area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					}
				}
			}
		}
		for(int i=0;i<in2-1;i++){
			for(int j=i+1;j<in2-1;j++){
				for(int k=0;k<in3;k++){
					if((y2[i]==y2[j]) || (y2[j]==y3[k]) || (y2[i]==y3[k])){
						
					}
					else{
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=(-1*(y2[j]-y2[i]))/two;
							if(area<0){
							    area=area*-1;
							}
							//cout<<"area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					}
				}
			}
		}
			for(int i=0;i<in2-1;i++){
			for(int j=i+1;j<in2-1;j++){
				for(int k=0;k<in4;k++){
					if((y2[i]==y2[j]) || (y2[j]==y4[k]) || (y2[i]==y4[k])){
						
					}
					else{
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=(-1*(y2[j]-y2[i]))/two;
							if(area<0){
							    area=area*-1;
							}
							//cout<<"area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					}
				}
			}
		}
			for(int i=0;i<in3-1;i++){
			for(int j=i+1;j<in3-1;j++){
				for(int k=0;k<in1;k++){
					if((y3[i]==y3[j]) || (y3[j]==y1[k]) || (y3[i]==y1[k])){
						
					}
					else{
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=(-1*(y3[j]-y3[i]))/two;
							if(area<0){
							    area=area*-1;
							}
							//cout<<"area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					}
				}
			}
		}
		for(int i=0;i<in3-1;i++){
			for(int j=i+1;j<in3-1;j++){
				for(int k=0;k<in2;k++){
					if((y3[i]==y3[j]) || (y3[j]==y2[k]) || (y3[i]==y2[k])){
						
					}
					else{
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=(-1*(y3[j]-y3[i]))/two;
							if(area<0){
							    area=area*-1;
							}
							//cout<<"area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					}
				}
			}
		}
		for(int i=0;i<in3-1;i++){
			for(int j=i+1;j<in3-1;j++){
				for(int k=0;k<in4;k++){
					if((y3[i]==y3[j]) || (y3[j]==y4[k]) || (y3[i]==y4[k])){
						
					}
					else{
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=(-1*(y3[j]-y3[i]))/two;
							if(area<0){
							    area=area*-1;
							}
							//cout<<"area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					}
				}
			}
		}
		for(int i=0;i<in4-1;i++){
			for(int j=i+1;j<in4-1;j++){
				for(int k=0;k<in1;k++){
					if((y4[i]==y4[j]) || (y4[j]==y1[k]) || (y4[i]==y1[k])){
						
					}
					else{
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=(-1*(y4[j]-y4[i]))/two;
							if(area<0){
							    area=area*-1;
							}
							//cout<<"area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					}
				}
			}
		}
		for(int i=0;i<in4-1;i++){
			for(int j=i+1;j<in4-1;j++){
				for(int k=0;k<in2;k++){
					if((y4[i]==y4[j]) || (y4[j]==y2[k]) || (y4[i]==y2[k])){
						
					}
					else{
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=(-1*(y4[j]-y4[i]))/two;
							if(area<0){
							    area=area*-1;
							}
							//cout<<"area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					}
				}
			}
		}
		for(int i=0;i<in4-1;i++){
			for(int j=i+1;j<in4-1;j++){
				for(int k=0;k<in3;k++){
					if((y4[i]==y4[j]) || (y4[j]==y3[k]) || (y4[i]==y3[k])){
						
					}
					else{
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=(-1*(y4[j]-y4[i]))/two;
							if(area<0){
							    area=area*-1;
							}
							//cout<<"area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					}
				}
			}
		}
		*/
		for(int i=0;i<=in1;i++){
			for(int j=0;j<=in2;j++){
				for(int k=0;k<=in3;k++){
					
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=((y3[k]-y1[i])-(2*(y2[j]-y1[k])))/two;
							if(area<0){
							    area=area*-1;
							}
						//	cout<<"area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					
				}
			}
		}
		for(int i=0;i<=in1;i++){
			for(int j=0;j<=in2;j++){
				for(int k=0;k<=in4;k++){
					
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=((y4[k]-y1[i])-(3*(y2[j]-y4[k])))/two;
							if(area<0){
							    area=area*-1;
							}
						//	cout<<"2area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					
				}
			}
		}
		for(int i=0;i<=in1;i++){
			for(int j=0;j<=in3;j++){
				for(int k=0;k<=in4;k++){
					
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=((2*(y4[k]-y1[i]))-(3*(y3[j]-y4[k])))/two;
							if(area<0){
							    area=area*-1;
							}
						//	cout<<"3area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					
				}
			}
		}
		for(int i=0;i<=in2;i++){
			for(int j=0;j<=in3;j++){
				for(int k=0;k<=in4;k++){
					
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
						//	area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
						area=((1*(y4[k]-y2[i]))-(2*(y3[j]-y4[k])))/two;
							if(area<0){
							    area=area*-1;
							}
							//cout<<"4area:"<<area<<endl;
							s=s+area;
							//cout<<"s:"<<s<<endl;
						//}			
					
				}
			}
		}
		std::cout<<std::setprecision(9) << s <<"\n";
	}
}
