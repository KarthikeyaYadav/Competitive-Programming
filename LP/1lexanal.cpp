#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<vector>
 
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
    char ch, buffer[15], operators[] = "+-*/%=", delimiters[] = {'.', '(', ')', ',', '{', '}', ';', '[', ']'};
    //std::vector<std::string> v = {"Hello", "World"};
    int delim[9]={0};
    ifstream fin("program.txt");
    int i,j=0;
    
    if(!fin.is_open()){
        cout<<"error while opening the file\n";
        exit(0);
    }
    
    while(!fin.eof()){
           ch = fin.get();
           
        for(i = 0; i < 6; ++i){
               if(ch == operators[i])
                   cout<<ch<<" 	is operator\n";
           }
           for(i=0;i<9;i++){
           	if(ch== delimiters[i])
           	cout<<ch<<"   is delimiter\n";
		   }
           
           if(isalpha(ch)){
               buffer[j++] = ch;
               //buffer[j++]=',';
           }
           if(isdigit(ch)){
           	cout<<ch<<"	  is constant\n";
		   }
           else if((ch == ' ' || ch == '\n') && (j != 0)){
                   buffer[j] = '\0';
                   
                                      
                   if(isKeyword(buffer) == 1){
				  
                       cout<<buffer<<" 	is keyword\n";
                       j = 0; 
               }
				   else{
                   	for(int q=0;q<j;q++){
                   		cout<<buffer[q]<<" ";
					   }
					   cout<<" 	is indentifier\n";
                       j=0;
				   }
                       
           }
           
    }
    
    fin.close();
    
    return 0;
}
