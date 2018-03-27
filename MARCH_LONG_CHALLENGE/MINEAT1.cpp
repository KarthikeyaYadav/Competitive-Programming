#include <bits/stdc++.h>
using namespace std;

int bs(int a[],int n,int h,int min,int max){
	if(min>=max){
		return max;
	}
	else{
		int mid=(min+max)/2;
		int hh=0;
		for(int i=n-1;i>=0;i--){
					hh=hh+a[i]/mid;
					if(a[i]%mid!=0)
					hh++;
				//	cout<<"hh:"<<hh<<endl;
					if(a[i]/mid==0){
						hh=hh+i;
					//	cout<<"hii"<<endl;
						break;
					}
				}
				if(hh<=h){
					int hhh=0,nmid=mid-1;
					for(int i=n-1;i>=0;i--){
					hhh=hhh+a[i]/nmid;
					if(a[i]%nmid!=0)
					hhh++;
				//	cout<<"hh:"<<hh<<endl;
					if(a[i]/nmid==0){
						hhh=hhh+i;
					//	cout<<"hii"<<endl;
						break;
					}
				}
				if(hhh<=h){
					if(min!=mid)
					return bs(a,n,h,min,nmid);
					else return min;
				}
				else return mid;
				}
				else{
					if(mid!=max)
					return bs(a,n,h,mid+1,max);
					else return mid;
				}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,h;
    cin>>t;
    while(t--){
    	cin>>n>>h;
    	int a[n];
    	unsigned long long int sum=0; 
    	int max=0;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		sum=sum+a[i];
    		if(max<a[i])
    		max=a[i];
		}
		sort(a,a+n);
		if(n==h){
			cout<<max<<"\n";
		}
		else{
			int x=sum/h;
			if(x==0)
			x=1;
			if(n<1000){
			
			int hh=0;
			while(1){
				//cout<<"x:"<<x<<endl;
				hh=0;
				for(int i=n-1;i>=0;i--){
					hh=hh+a[i]/x;
					if(a[i]%x!=0)
					hh++;
				//	cout<<"hh:"<<hh<<endl;
					if(a[i]/x==0){
						hh=hh+i;
					//	cout<<"hii"<<endl;
						break;
					}
				}
				if(hh<=h)
				break;
				x++;
			}
			cout<<x<<"\n";
		}
		else{
			int ans=bs(a,n,h,x,max);
			cout<<ans<<"\n";
		}
		}
	}
	return 0;
}
