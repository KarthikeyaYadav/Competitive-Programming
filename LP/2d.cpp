#include<bits/stdc++.h>
using namespace std;
int isKeyword(char buffer[]){
    
    int i, flag = 0;
   char keywords[8][2] = {"+","-","*","/","%","<",">","="};
    for(i = 0; i < 8; ++i){
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
		cout<<"\nGiven operator is valid\n";
	}
	else cout<<"\nGiven operator is not valid\n";
}
