#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main(){
	int n,q,L,R,mini=111111111;
	vector<int> b;
	scanf("%d%d%d%d",&n,&q,&L,&R);
	//cin>>n>>q>>L>>R;
	int a[n+1]={0};
	int cho,x,y,l,r;
	for(int i=0;i<q;i++){
	scanf("%d",&cho);
	//	cin>>cho;
		if(cho==1){
			scanf("%d%d",&x,&y);
			//cin>>x>>y;
			a[x]=y;
			if(y>R){
				b.push_back(x);
				if(mini>x)
				mini=x;
			}
			else{
				//int int_to_remove = x;
				int it=-1;
 auto it = std::find(b.begin(), b.end(), x);
if(it != b.end())
    b.erase(it);
    else b.pop_back();
if(mini==x){
	mini=111111111;
	for(int i1=0;i1<b.size();i1++){
		if(mini>b[i1])
		mini=b[i1];
	}
}
			}
		}
		else{
			int c=0;
		scanf("%d%d",&l,&r);
		//	cin>>l>>r;
			for(int j=l;j<=r;j++){
				int max=0,f=0;
				for(int k=j;k<=r;k++){
				if(f==0){
					if(a[k]>max){
						max=a[k];
						}
						if(max>R)
						f=1;
						else if(max>=L)
						c++;
					
				}
				}
			}
			printf("%d\n",c);
			//cout<<c<<endl;
		}
	}
	return 0;
}
