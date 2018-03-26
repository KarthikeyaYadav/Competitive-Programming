#include<bits/stdc++.h>
using namespace std;
int isKeyword(char buffer[]){
    char keywords[64][20] = {"asm","auto","bool","break","case","catch",
                   "char","class","const","const_cast",
                   "continue","default","delete","do","double",
                   "dynamic_cast","else","enum","explicit",
                   "export","extern","false","float","for",
                   "friend","goto","if","inline","int","long",
                   "main","mutable","namespace","new",
                   "operator","private","protected","public",
                   "register","reinterpret_cast","return",
                   "short","signed","sizeof","static",
                   "static_cast","struct","switch","template",
                   "this","throw","true","try","typedef",
                   "typeid","typename","union","unsigned","using",
                   "virtual","void","volatile","wchar_t","while"};
    int i, flag = 0;
    
    for(i = 0; i < 64; ++i){
        if(strcmp(keywords[i], buffer) == 0){
            flag = 1;
            break;
        }
    }
    
    return flag;
}
int main(){
	string s;
	cin>>s;
	int n = s.length(); 
     
    // declaring character array
    char char_array[n+1]; 
     
    // copying the contents of the 
    // string to char array
    strcpy(char_array, s.c_str());
	if(isKeyword(char_array)==1){
		cout<<"\nGiven identifier is valid\n";
	}
	else cout<<"\nGiven identifier is not valid\n";
}
