#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<vector>
#include <map>
#include <iterator>
 
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
	map <string, int> gquiz1;
	int flag=0;
	char z[50][15];int ind=-1,ff=0;
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
                  
				   for(int h=1;h<=64;h++){
                   	gquiz1.insert(pair <string, int> (keywords[h], 0));
				   }
    char ch, buffer[15], operators[] = "+-*/%=", delimiters[] = {'.', '(', ')', ',', '{', '}', ';', '[', ']'};
    //std::vector<std::string> v = {"Hello", "World"};
    int delim[9]={0},op[6]={0},a[50],in=-1;
    ifstream fin("program2.txt");
    int i,j=0;
    
    if(!fin.is_open()){
        cout<<"error while opening the file\n";
        exit(0);
    }
    
    while(!fin.eof()){
           ch = fin.get();
           if(ch=='/'){
           	while(1){
           		ch=fin.get();
           		if(ch=='\n'){
			    flag=1;	   
           		break;
           	}
			   }
		   }
          
		  if(flag!=1){
		  
        for(i = 0; i < 6; ++i){
               if(ch == operators[i]){
			   
                   op[i]=1;
				   //cout<<ch<<" 	is operator\n";
				   if(j!=0){
				   	buffer[j] = '\0';
                   
                                      
                   if(isKeyword(buffer) == 1){
				  gquiz1[buffer]=1;
                       //cout<<buffer<<" 	is keyword\n";
                       j = 0; 
               }
				   else{
                 
                   		//cout<<buffer[q]<<" ";
                   		ff=0;
                   		for(int g=0;g<=ind;g++){
                   			if(!strcmp(buffer,z[g])){
                   				ff=1;
                   				break;
							   }
						   }
						   if(ff==0){
						   	//z[++ind]=buffer;
						   	strcpy(z[++ind],buffer);
						   }
					   
					   //cout<<" 	is indentifier\n";
                       j=0;
				   }
				   }
           }
       }
           for(i=0;i<9;i++){
           	if(ch== delimiters[i]){
			   
           	delim[i]=1;
			   if(j!=0){
			   	buffer[j] = '\0';
                   
                                      
                   if(isKeyword(buffer) == 1){
				  gquiz1[buffer]=1;
                       //cout<<buffer<<" 	is keyword\n";
                       j = 0; 
               }
				   else{
                 
                   		//cout<<buffer[q]<<" ";
                   		ff=0;
                   		for(int g=0;g<=ind;g++){
                   			if(!strcmp(buffer,z[g])){
                   				ff=1;
                   				break;
							   }
						   }
						   if(ff==0){
						   	//z[++ind]=buffer;
						   	strcpy(z[++ind],buffer);
						   }
					   
					   //cout<<" 	is indentifier\n";
                       j=0;
				   }
			   }
			   }
           //	cout<<ch<<"   is delimiter\n";
		   }
           
           if(isalpha(ch)){
               buffer[j++] = ch;
               //buffer[j++]=',';
           }
           if(isdigit(ch)){
           	a[++in]=ch;
           	//cout<<ch<<"	  is constant\n";
		   }
           else if((ch == ' ' || ch == '\n') && (j != 0)){
                   buffer[j] = '\0';
                   
                                      
                   if(isKeyword(buffer) == 1){
				  gquiz1[buffer]=1;
                       //cout<<buffer<<" 	is keyword\n";
                       j = 0; 
               }
				   else{
                 
                   		//cout<<buffer[q]<<" ";
                   		ff=0;
                   		for(int g=0;g<=ind;g++){
                   			if(!strcmp(buffer,z[g])){
                   				ff=1;
                   				break;
							   }
						   }
						   if(ff==0){
						   	//z[++ind]=buffer;
						   	strcpy(z[++ind],buffer);
						   }
					   
					   //cout<<" 	is indentifier\n";
                       j=0;
				   }
                       
           }
           
    }
    else {
    	flag=0;
	}
}
    for(int h=0;h<=ind;h++){
    	cout<<z[h]<<" is a identifier\n";
	}
	cout<<"\n\n-----end of identifiers------\n\n";
    for(int h=0;h<64;h++){
    	if(gquiz1[keywords[h]]==1){
    		cout<<keywords[h]<<" is a keyword\n";
		}
	}
	cout<<"\n\n-----end of keywords------\n\n";
	for(int h=0;h<6;h++){
		if(op[h]==1){
			cout<<operators[h]<<" is operator\n";
		}
	}
	cout<<"\n\n-----end of operators------\n\n";
	for(int h=0;h<9;h++){
		if(delim[h]==1){
			cout<<delimiters[h]<<" is delimiter\n";
		}
	}
	cout<<"\n\n-----end of delimiters------\n\n";
//	for(int h=0;h<=in;h++){
//		cout<<a[h]<<" is constant\n";
//	}
//	cout<<"\n\n-----end of constants------\n\n";
    fin.close();
    
    return 0;
}
