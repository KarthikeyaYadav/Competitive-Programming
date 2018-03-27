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
		double x[n],y[n];
		for(int i=0;i<n;i++){
			scanf("%lf %lf",&x[i],&y[i]);
		}
		  long double d1,d2,d3,s=0,area=0,two=2.000000000000;
		
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				for(int k=j+1;k<n;k++){
					if((x[i]==x[j]) || (x[j]==x[k]) || (x[i]==x[k])){
						
					}
					else{
						//d1=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
						//d2=sqrt(pow((x[i]-x[k]),2)+pow((y[i]-y[k]),2));
						//d3=sqrt(pow((x[k]-x[j]),2)+pow((y[k]-y[j]),2));	
						//if((d1+d2>d3) && (d1+d3>d2) && (d2+d3>d1)){
							area=((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]))/two;
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
		std::cout<<std::setprecision(9) << s <<"\n";
	}
}
