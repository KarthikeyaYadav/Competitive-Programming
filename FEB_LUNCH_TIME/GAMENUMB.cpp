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
		long long int c=0;
		for(int i=0;i<n;i++){
    		cin>>d[i];
    		c=c+d[i];
		}
		for(int i=0;i<k;i++){
    		cin>>b[i];
		}
		vector< pair <int,int> > vect;
		 for (int i=0; i<n; i++)
        vect.push_back( make_pair(a[i],d[i]) );
        
        sort(vect.begin(), vect.end());
        
       // for (int i=0; i<n; i++)
   // {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
       // cout << vect[i].first << " "
       //      << vect[i].second << endl;
  //  }
        
        int si=0,li=n-1,temp;
        
        for(int j=0;j<k;j++){
        	temp=b[j];
        	b[j]=c-b[j];
        	if((j+1)%2==1){
        		//cout<<"hi"<<b[j]<<endl;
        		while(si<=li){
        			if(b[j]>=vect[si].second){
        				b[j]=b[j]-vect[si].second;
        				vect[si].second=0;
        				si++;
        				if(b[j]==0){
        					break;
						}
					}
					else{
						vect[si].second=vect[si].second-b[j];
						b[j]=0;
						break;
					}
				}
			}
			else{
				//cout<<"hi  "<<b[j]<<endl;
				while(li>=si){
					if(b[j]>=vect[li].second){
						b[j]=b[j]-vect[li].second;
        				vect[li].second=0;
        				li--;
        				if(b[j]==0){
        					break;
						}
					}
					else{
						if(vect[li].second!=0)
						vect[li].second=vect[li].second-b[j];
						b[j]=0;
						break;
					}
				}
			}
			c=temp;
		}
		//cout<<"si:"<<si<<endl;
		//cout<<"li:"<<li<<endl;		
		long long int s=0;
		for(int g=si;g<=li;g++){
			s=s+(long long int)(vect[g].first*vect[g].second);
		}
		cout<<s<<"\n";
	}
    return 0;
}
