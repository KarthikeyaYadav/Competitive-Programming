#include <bits/stdc++.h>
using namespace std;
#define long_long_int ll

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,n,k;
    cin>>t;
    while(t--){
    	cin>>n>>k;
    	long long int a[n],d[n],b[k];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
		}
		 int c=0;
		for(int i=0;i<n;i++){
    		cin>>d[i];
    		c=c+d[i];
		}
		int tot=c;
		for(int i=0;i<k;i++){
    		cin>>b[i];
		}
		vector <int> v;
		vector< pair <int,int> > vect;
		 for (int i=0; i<n; i++)
        vect.push_back( make_pair(a[i],d[i]) );
        
        sort(vect.begin(), vect.end());
        for(int i=0;i<n;i++){
        	for(int i1=0;i1<vect[i].second;i1++){
        		v.push_back(vect[i].first);
			}
		}
		//for(int i=0;i<c;i++)
	//	cout<<v[i]<<" ";
	//	cout<<"\n";
		int si=0,li=c-1,temp;
		for(int i=0;i<k;i++){
			temp=b[i];
			if(i%2==0){
				b[i]=tot-b[i];
				si=si+b[i];
			}
			else{
				b[i]=tot-b[i];
				li=li-b[i];
			}
			tot=temp;
		}
		long long int s=0;
		for(int y=si;y<=li;y++){
			s=s+v[y];
		}
		cout<<s<<"\n";
	}
}
