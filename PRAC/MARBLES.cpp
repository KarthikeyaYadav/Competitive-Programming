#include <bits/stdc++.h>
using namespace std;
long long C(int n, int r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,k;
    cin>>t;
    while(t--){
    	cin>>n>>k;
    	long long i=C(n-1,k-1);
    	cout<<i<<"\n";
	}
    return 0;
}
