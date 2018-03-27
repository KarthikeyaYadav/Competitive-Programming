#include <bits/stdc++.h>
using namespace std;
int main(){
	int q,num;
	string s;
	char * pch;
	scanf("%d",&q);
	unsigned long long int sum=0;
	vector<int> c={0};
	int count=0;
	while(q--){
		/*scanf(""%[^\n]"",&s);
		pch = strtok (str," ");
		if(!strcmp(pch,"Insert"))
		*/
		scanf("%s",&s);
		if(!strcmp(s,"Insert")){
			scanf("%d",&num);
			sum=sum+num;
			count++;
		}
	}
}
