#include <bits/stdc++.h>
using namespace std;

bool isvalid(int a, int b, int c){
    return c+b>a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,pos,val,l,r;
    cin>>n>>q;
    vector <int> a(n);
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	while(q--){
		int t;
		cin>>t;
		if(t==1){
			cin>>pos>>val;
			pos--;
			a[pos]=val;
			//for(int i=0;i<n;i++){
    	//out<<a[i]<<" ";
	//}
	//cout<<endl;
		}
		else{
			cin>>l>>r;
			l--;r--;
			int v=r-l+1;
				if(v<=2)
			cout<<0<<"\n";
			else{
			vector <int> temp(v);
			vector <int> :: iterator it;
			it = a.begin() + l;
			temp.assign(it, a.end() - (a.size()-1-r));
			
			sort (temp.begin(), temp.end());
			/*for(int i=0;i<temp.size();i++){
				cout<<temp[i]<<" ";
			}
			cout<<endl;*/
			unsigned long long int sum=0,max=0;
			for(int j=v-1;j>1;j--){
				for(int k=j-1;k>0;k--){
				for(int i=k-1;i>=0;i--){
				
				if(isvalid(temp[j],temp[k],temp[i])){
					sum=temp[j]+temp[k]+temp[i];
					if(sum>max){
						max=sum;
					}
					//break;
				}
			}
		}
	}
			cout<<max<<"\n";
		}
	}
	}
	return 0;
}
