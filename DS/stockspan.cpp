#include <bits/stdc++.h>
using namespace std;

void calculateSpan(int price[], int n, int S[])
{
   
   stack<int> st;
   st.push(0);  
   S[0] = 1;

   for (int i = 1; i < n; i++)
   {
      while (!st.empty() && price[st.top()] <= price[i])
         st.pop();
		 
     
      S[i] = (st.empty())? (i + 1) : (i - st.top());
 
      st.push(i);
   }
}
 

int main()
{
	int n;
	cout<<"Enter Number of Stock Prices You Wanna Enter:";
	cin>>n;
    int price[n];
    cout<<"\nEnter The prices:";
    for(int i=0;i<n;i++){
    	cin>>price[i];
	}
    int S[n];
 
    
    calculateSpan(price, n, S);
 
   
    for(int i=0;i<n;i++){
    	cout<<S[i]<<" ";
	}
	cout<<endl;
 
    return 0;
}
