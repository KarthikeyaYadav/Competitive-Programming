#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,u,d;
    cin>>t;
    while(t--){
    	cin>>n>>u>>d;
    	int a[n];
    	for(int j=1;j<=n;j++)
    	cin>>a[j];
    	int ch,in=1,p=0,nh,f=0;
    	//cin>>ch;
    	ch=a[1];
    	for(int i=2;i<=n;i++){
    		//cin>>nh;
    		nh=a[i];
    		ch=a[i-1];
    		if(ch==nh){
    			in++;
    			//cout<<"hi"<<endl;
			}
			else if(ch<nh){
				int t1=nh-ch;
		//	cout<<"t1:"<<t1<<endl;
				if(t1>u){
					cout<<in<<"\n";
					f=1;
					break;
				}
				else{
					in++;
				}
			}
			else if(ch>nh){
				int t2=ch-nh;
			//	cout<<"t2:"<<t2<<endl;
				if(t2>d){
					if(p==0){
						p=1;
						in++;
					}
					else{
						cout<<in<<"\n";
						f=1;
						break;
					}
				}
				else{
					in++;
				}
			}
			//ch=nh;
		}
		if(f==0){
			cout<<in<<"\n";
		}
	}
    return 0;
}
