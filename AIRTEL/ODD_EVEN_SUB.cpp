#include <bits/stdc++.h>
using namespace std;

unsigned long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
{
    unordered_map<int, int> um;
    int curr_sum = 0;
 
    for (int i = 0; i < n; i++) {
        curr_sum += (arr[i] == 0) ? -1 : arr[i];
        um[curr_sum]++;
    }
 
    unsigned long long int count = 0;
    for (auto itr = um.begin(); itr != um.end(); itr++) {
 
        if (itr->second > 1)
            count += ((itr->second * (itr->second - 1)) / 2);
    }
 
    if (um.find(0) != um.end())
        count += um[0];
 
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n],t;
    for(int i=0;i<n;i++){
    	cin>>t;
    	if(t%2){
    		a[i]=1;
		}
		else a[i]=0;
	}
	unsigned long long int ans=countSubarrWithEqualZeroAndOne(a, n);
	return 0;
}
