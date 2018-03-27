#include <iostream>
#include<cstdio>
using namespace std;


unsigned long long int findS(unsigned long long int s)
{
	unsigned long long int l = 1, r = s / 2;
	//cout<<"l: "<<l<<endl;
	//cout<<"r: "<<r<<endl;
	unsigned long long int mid=(l + r) / 2;
	int f=0;
	if(mid>1414213562){
		mid=1414213562;
	}
	unsigned long long int diff=1111111111111111111,ind,d;
//	unsigned long long int sum=mid * (mid + 1) / 2;
unsigned long long int sum;
	/*	unsigned long long int b=2;
		int f=0;
		while(1){
			if(sum>1000000000000000000){
				r=s/(++b);
				mid=(l + r) / 2;
				sum=mid * (mid + 1) / 2;
			}
			else {
			cout<<"sum: "<<sum<<endl;
			break;}
		}
		*/

	// Apply Binary search
	while (l <= r) {

		// Find mid
		if(f!=0){
		
		
		mid = (l + r) / 2;
//cout<<"mid: "<<mid<<endl;
}
f=1;
		// find sum of 1 to mid natural numbers
		// using formula
		 sum = mid * (mid + 1) / 2;
//cout<<"sum: "<<sum<<endl;


		// If sum is equal to n
		// return mid
		
		if (sum == s)
			return mid;

		// If greater than n
		// do r = mid-1
		else if (sum > s){
					
			r = mid - 1;
			//cout<<"r: "<<r<<endl;
}
		// else do l = mid + 1
		else{
		d=s-sum;
		//cout<<"d: "<<d<<endl;
		if(d<diff && d>0){
			diff=d;
			//cout<<"diff: "<<diff<<endl;
			ind=mid;
			//cout<<"ind: "<<ind<<endl;
		}
			l = mid + 1;
			//cout<<"l: "<<l<<endl;
		}
	}

	// If not possible, return -1
	return ind;
}

unsigned long long int findS2(unsigned long long int s)
{
	unsigned long long int l = 1, r = s / 2;
	unsigned long long int mid=(l + r) / 2;
	int f=0;
	if(mid>1442249){
		mid=1442249;
	}
	unsigned long long int diff=1111111111111111111,ind,d;

	// Apply Binary search
	while (l <= r) {

		// Find mid
		if(f!=0){
		
		mid = (l + r) / 2;
}
f=1;
		// find sum of 1 to mid natural numbers
		// using formula
		unsigned long long int sum = mid * (mid + 1) * (2 * mid +1 ) / 6;

		// If sum is equal to n
		// return mid
		if (sum == s)
			return mid;

		// If greater than n
		// do r = mid-1
		else if (sum > s){
					
			r = mid - 1;
}
		// else do l = mid + 1
		else{
		d=s-sum;
		if(d<diff && d>0){
			diff=d;
			ind=mid;
		}
			l = mid + 1;
		}
	}

	// If not possible, return -1
	return ind;
}

unsigned long long int findS3(unsigned long long int s)
{
	unsigned long long int l = 1, r = s / 2;
	unsigned long long int mid=(l + r) / 2;
	int f=0;
	if(mid>44720){
		mid=44720;
	}
	unsigned long long int diff=1111111111111111111,ind,d;

	// Apply Binary search
	while (l <= r) {

		// Find mid
		if(f!=0){
		
		mid = (l + r) / 2;
}
f=1;
		// find sum of 1 to mid natural numbers
		// using formula
		unsigned long long int sum = mid * (mid + 1) / 2;
		sum=sum * sum;

		// If sum is equal to n
		// return mid
		if (sum == s)
			return mid;

		// If greater than n
		// do r = mid-1
		else if (sum > s){
					
			r = mid - 1;
}
		// else do l = mid + 1
		else{
		d=s-sum;
		if(d<diff && d>0){
			diff=d;
			ind=mid;
		}
			l = mid + 1;
		}
	}

	// If not possible, return -1
	return ind;
}
// Drivers code
int main()
{
	int q,k;
	unsigned long long int n;
	scanf("%d",&q);
	while(q--){
		scanf("%llu %d",&n,&k);
		unsigned long long int z=0;
		unsigned long long int i=1,sum=0;
		if(n==0)
		printf("%llu\n",z);
		else if(k==1){
			z=findS(n);
			printf("%llu\n",z);
		}
		else if(k==2){
			z=findS2(n);
			printf("%llu\n",z);
		}
		else if(k==3){
			z=findS3(n);
			printf("%llu\n",z);
		}
	}

	return 0;
}

