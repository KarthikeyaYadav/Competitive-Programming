#include<iostream>
#include <iomanip> 
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
		cin>>a[j];
		int max=0,c=0;
		for(int j=0;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if((a[j]+a[k])>max){
					max=a[j]+a[k];
					c=1;
				}
				else if(max==(a[j]+a[k]))
				c++;
			}
		}
		n--;
		int s=(n*(n+1))/2;
		//s++;
		//cout<<"s:"<<s<<endl;
		//cout<<"c:"<<c<<endl;
		cout<<std::fixed<<std::setprecision(8)<<(float)c/(float)s<<endl;
	}
}
