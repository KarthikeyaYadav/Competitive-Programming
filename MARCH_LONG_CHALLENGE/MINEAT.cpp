#include <bits/stdc++.h>
using namespace std;

int bsearch(int a[],int n,int h,int si,int li){
	if(si==li){
		return a[si];
	}
	else{
		int mid=(si+li)/2;
	//	cout<<"mid:"<<mid<<endl;
		int temp=mid+1;
		for(int i=mid+1;i<n;i++){
			temp=temp+(a[i]/a[mid]);
			if(a[i]%a[mid]!=0)
			temp++;
		//	cout<<"temp:"<<temp<<endl;
		}
		
		if(temp<=h){
			int t1=mid;
			for(int i=mid;i<n;i++){
				t1=t1+(a[i]/a[mid-1]);
				if(a[i]%a[mid-1]!=0)
			t1++;
			}
			if(t1<=h){
				return bsearch(a,n,h,si,mid-1);
			}
			else{
				return a[mid];
			}
		}
		else{
			return bsearch(a,n,h,mid+1,li);
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
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		sum=sum+a[i];
		}
		sort(a,a+n);
		if(n==h){
			cout<<a[n-1]<<"\n";
		}
		else if(sum<=h){
			cout<<1<<"\n";
		}
		else{
			int tmp=bsearch(a,n,h,0,n-1);
			if(a[0]==tmp){
				for(int i=2;i<=a[0];i++){
					int x=0;
					for(int j=0;j<n;j++){
						x=x+ceil(a[j]/i);
					}
					if(x<=h)
					cout<<i<<"\n";
				}
			}
			else cout<<tmp<<"\n";
		}
	}
	return 0;
}
