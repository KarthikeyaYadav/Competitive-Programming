#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fin("program1.txt");
	int count=0;
	while(!fin.eof()){
           char ch = fin.get();
           if(ch=='\n')
           count++;
           cout<<count<<endl;
       }
}
