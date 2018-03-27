#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<iostream>
#include<sstream>
#include <QString>
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
			 std::string s = to_string(a);
			 cout<<s<<endl;
			int max=0;
			string t=s;
			if(r==0){
				for(int i=0;i<s.length();i++){
					char ch=s.at(i);
					if(ch=='0'||ch=='3'||ch=='6'||ch=='9'){
						s.erase(i);
						//int q=stoi(s);
						int q;
						std::istringstream ( s ) >> q;
						if(max<q)
						max=q;
					}
					s=t;
				}
			}
			else if(r==1){
				for(int i=0;i<s.length();i++){
					char ch=s.at(i);
					if(ch=='1'||ch=='4'||ch=='7'){
						s.erase(i);
						//int q=stoi(s);
						int q;
						std::istringstream ( s ) >> q;
						cout<<q<<endl;
						if(max<q)
						max=q;
					}
					s=t;
				}
			}
			else {
				for(int i=0;i<s.length();i++){
					char ch=s.at(i);
					if(ch=='2'||ch=='5'||ch=='8'){
						s.erase(i);
					//	int q=stoi(s);
						int q;
						std::istringstream ( s ) >> q;
						if(max<q)
						max=q;
					}
					s=t;
				}
			}
			printf("%d\n",max);
		}
	}
	return 0;
}
