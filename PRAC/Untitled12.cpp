#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<iostream>
#include<sstream>
//#include <QString>
//#include<cmath>
using namespace std;
template <typename T>
    std::string to_string(T value)
    {
      //create an output string stream
      std::ostringstream os ;

      //throw the value into the string stream
      os << value ;

      //convert the string stream into a string and return
      return os.str() ;
    }
int sti(string s){
	int sum=0;
	for(int h=0;h<s.length();h++){
		int i=s.at(h)-'0';
		sum=sum*10+i;
	}
	return sum;
}
int test(int v){
	int sum=0;
	if(v%2==1)
	return 0;
	else{
		while(v){
			sum=sum+v%10;
			v=v/10;
		}
		if(sum%3==0)
		return 1;
		else return 0;
	}
}
int main(){
	int t,a;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&a);
		int b=a,sum=0;
		while(b){
			sum=sum+b%10;
			b=b/10;
		}
		b=a;
		int r=sum%3;
		if(a%2==1){
			int d=a%10;
			b=b/10;
			if((sum-d)%3!=0 || b%2==1)
			printf("-1\n");
			else printf("%d\n",b);
		}
		else{
		//	string s=string(itoa(a));
		string res="-1";
			 std::string s = to_string(a);
			// cout<<s<<endl;
			int max=0;
			string t=s;
			if(r==0){
				for(int i=0;i<s.length();i++){
					char ch=s.at(i);
					int ff=0;
					if(ch=='0'||ch=='3'||ch=='6'||ch=='9'){
						
						s.erase(s.begin()+i);
						//int q=stoi(s);
						int q=sti(s);
						int x=test(q);
						if(x==1)
						if(max<q){
							if(i==s.length()-1 && q%2==1){
							ff=1;
						}
						if(ff==0){
						
						res=s;
						max=q;}}
					}
					s=t;
				}
			}
			else if(r==1){
				for(int i=0;i<s.length();i++){
					int ff=0;
					char ch=s.at(i);
					//cout<<ch<<endl;
					if(ch=='1'||ch=='4'||ch=='7'){
						s.erase(s.begin()+i);
						//cout<<s<<endl;
						//int q=stoi(s);
						int q=sti(s);
						
						int x=test(q);
						if(x==1)
						if(max<q){
							if(i==s.length()-1 && q%2==1){
							ff=1;
						}
						if(ff==0){
						
						res=s;
						max=q;}}
					}
					s=t;
				}
			}
			else {
				for(int i=0;i<s.length();i++){
					int ff=0;
					char ch=s.at(i);
					if(ch=='2'||ch=='5'||ch=='8'){
							s.erase(s.begin()+i);
					//int q=stoi(s);
						int q=sti(s);
						
						int x=test(q);
						if(x==1)
						if(max<q){
							if(i==s.length()-1 && q%2==1){
							ff=1;
						}
						if(ff==0){
						
						res=s;
						max=q;}}
					}
					s=t;
				}
			}
			cout<<res<<endl;
			//printf("%s\n",&res);
		}
	}
	return 0;
}
