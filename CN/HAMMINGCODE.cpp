#include<iostream>
 
using namespace std;
 
int main() {
    int data[10];
    int dataatrec[10],c,c1,c2,c3,i;
 
    cout<<"Enter 4 bits of data one by one\n";
    cin>>data[3];
    cin>>data[5];
    cin>>data[6];
    cin>>data[7];
 
    //Calculation of even parity
    data[1]=data[3]^data[5]^data[7];
    data[2]=data[3]^data[6]^data[7];
    data[4]=data[5]^data[6]^data[7];
 
    cout<<"\nEncoded data is\n";
    for(i=1;i<=7;i++)
        cout<<data[i];
    
    cout<<"\n\nEnter received data bits one by one\n";
    for(i=1;i<=7;i++)
        cin>>dataatrec[i];
 int f=0;
    for(int i=1;i<=7;i++){
    	if(data[i]!=dataatrec[i]){
    		cout<<"error at position "<<i<<endl;
    		f=1;
    		break;
		}
	}
	if(f==0)
	cout<<"No error!!!"<<endl;
	
    
    return 0;
}
