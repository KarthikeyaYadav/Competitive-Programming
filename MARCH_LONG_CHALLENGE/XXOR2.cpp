#include <bits/stdc++.h>
using namespace std;

struct cell{
	int one[32]={0};
	int zero[32]={0};
	bool flag=0;
};

void fun(vector <vector <struct cell> > &b, int row, int col){
	if(b[row][col].flag==1)
	return;
	fun(b,row,col-1);
	b[row][col].flag=1;
	b[row][col]=b[row][col-1];
	for(int k=0;k<32;k++){
		if(b[col+row][0].one[k])
		b[row][col].one[k]++;
		else b[row][col].zero[k]++;
	}
	return;
}

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
	//	int nn=a[i];
	b[i][0].flag=1;
		std::string binaryNum = std::bitset<32>(a[i]).to_string();
		for (int j = 31,ind=0; j >= 0; j--,ind++){
		if(binaryNum[j]=='1'){
			b[i][0].one[ind]++;
		}
		else b[i][0].zero[ind]++;
	}
	}
	for(int p=0;p<q;p++){
	cin>>l>>r;
	l--;r--;
	int c=r-l;
	if(b[l][c].flag==0){
	fun(b,l,c);
	}
	
	
std::string bin="00000000000000000000000000000000";
	//int bin[32]={0};
	for(int i=0;i<32;i++){
		if(b[l][c].one[i]<b[l][c].zero[i]){
			//cout<<"hi"<<endl;
			bin[i]='1';
		}
	}
//	cout<<"bin:"<<bin<<endl;
	reverse(bin.begin(),bin.end());
	bin[0]='0';
//	cout<<"bin:"<<bin<<endl;
	unsigned long num = std::bitset<32>(bin).to_ulong();

	cout<<num<<"\n";


}
	
}
