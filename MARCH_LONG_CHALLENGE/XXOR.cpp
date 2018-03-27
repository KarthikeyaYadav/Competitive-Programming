#include <bits/stdc++.h>
using namespace std;

struct cell{
	int one[32]={0};
	int zero[32]={0};
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,l,r;
    cin>>n>>q;
    //struct cell c[n][n];
    vector<vector<struct cell> > b(n);
    int temp=n;
    for(int i=0;i<n;i++){
    	b[i] = vector<struct cell>(temp);
    	temp--;
	}
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		int nn=a[i];
		//cout<<"nn:"<<nn<<endl;
		int binaryNum[32]={0};
		int ii = 0;
	while (nn > 0) {

		// storing remainder in binary array
		binaryNum[ii] = nn % 2;
		nn = nn / 2;
		ii++;
	}
	
	for (int j = 31,ind=0; j >= 0; j--,ind++){
		if(binaryNum[j]){
			b[i][0].one[ind]++;
		}
		else b[i][0].zero[ind]++;
	}
	}
	/*for(int i=0;i<n;i++){
		cout<<endl;
		for(int j=0;j<32;j++){
			cout<<b[i][0].one[j];
		}
		cout<<endl;
		for(int j=0;j<32;j++){
			cout<<b[i][0].zero[j];
		}
	}*/
	for(int col=1;col<n;col++){
		int j=col;
		for(int row=0;row<n-col;row++){
			b[row][j]=b[row][j-1];
			for(int k=0;k<32;k++){
				if(b[j+row][0].one[k])
				b[row][j].one[k]++;
				else b[row][j].zero[k]++;
			}
			//j++;
		}
	}
	/*for(int i=0;i<n;i++){
		for(int k=0;k<n-i;k++){
		
		cout<<endl;
		for(int j=0;j<32;j++){
			cout<<b[i][k].one[j];
		}
		cout<<endl;
		for(int j=0;j<32;j++){
			cout<<b[i][k].zero[j];
		}
	}
}*/
for(int p=0;p<q;p++){
	cin>>l>>r;
	l--;r--;
	int c=r-l;
	/*	cout<<"hi"<<endl;
		for(int j=0;j<32;j++){
			cout<<b[l][r].one[j];
		}
		cout<<endl;
		for(int j=0;j<32;j++){
			cout<<b[l][r].zero[j];
		}
		cout<<endl;*/
	
	int bin[32]={0};
	for(int i=0;i<32;i++){
		if(b[l][c].one[i]<b[l][c].zero[i]){
			bin[i]=1;
		}
	}
	for(int i=31;i>=0;i--)
	cout<<bin[i];
	cout<<endl;
	int num=0;
	for(int i=1;i<32;i++){
		//cout<<bin[i];
		if(bin[i]){
			num=num+pow(2,31-i);
		}
	}
	cout<<num<<"\n";
}
	return 0;
}
