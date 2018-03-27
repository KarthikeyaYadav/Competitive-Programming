#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    //string s;
    //ostringstream str1;
    cin>>t;
    while(t--){
    	cin>>n;
    	while(1){
    		cout<<n<<"    "<<"hi     "<<"\n";
		n++;
	//	str1.clear();
    //	str1 << n;
    	//string s = boost::lexical_cast<string>(n); 
    //	string s = str1.str();
    	
    	s=std::to_string(n);
    	cout<<"string:"<<s<<endl;
    	int l=s.length();
    	cout<<l;
    	int f=0;
    	if(l%2==0){
    		int i=l/2,j=l/2-1;
    		while(j>=0){
    			if(s[j]!=s[i]){
    				f=1;
    				break;
				}
				else{
					j--;
					i++;
				}
			}
		}
		else{
			int i=l/2+1,j=l/2-1;
			cout<<"i:"<<i<<"   j:"<<j<<endl;
			while(j>=0){
    			if(s[j]!=s[i]){
    				f=1;
    				break;
				}
				else{
					j--;
					i++;
				}
				cin>>n;
			}
		}
    	if(f==0){
    		cout<<n<<"\n";
    		break;
		}
    }
    	
	}
    return 0;
}
