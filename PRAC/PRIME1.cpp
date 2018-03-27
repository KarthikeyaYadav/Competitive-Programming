#include <bits/stdc++.h>
using namespace std;
void fastscan(int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;
 
    number = 0;
 
    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;
 
        // extract the next character from the buffer
        c = getchar();
    }
 
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
 
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t,n,m;
    cin>>t;
    //fastscan(t);
    while(t--){
    cin>>n>>m;
    //cout<<"hi";
    	for(int i=n;i<=m;i++){
    		int f=0;
    		for(int j=2;j<=sqrt(i);j++){
    			if(i%j==0){
    				f=1;
    				break;
				}
			}
			if(f==0 && i!=1){
				cout<<i<<"\n";
			}
		}
	}
    return 0;
}
