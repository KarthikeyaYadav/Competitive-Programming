#include <bits/stdc++.h>
using namespace std;

struct MyStack
{
    stack<int> s;
    int minEle;
 
    void getMin()
    {
        if (s.empty())
            cout << "Stack is empty\n";
 
        
        else
            cout <<"Minimum Element in the stack is: "
                 << minEle << "\n";
    }
 
   
    void peek()
    {
        if (s.empty())
        {
            cout << "Stack is empty ";
            return;
        }
 
        int t = s.top(); 
 
        cout << "Top Most Element is: ";
 
    
        (t < minEle)? cout << minEle: cout << t;
    }
 
    
    void pop()
    {
        if (s.empty())
        {
            cout << "Stack is empty\n";
            return;
        }
 
        cout << "Top Most Element Removed: ";
        int t = s.top();
        s.pop();
 
       
        if (t < minEle)
        {
            cout << minEle << "\n";
            minEle = 2*minEle - t;
        }
 
        else
            cout << t << "\n";
    }
 
    
    void push(int x)
    {
        
        if (s.empty())
        {
            minEle = x;
            s.push(x);
            cout <<  "Number Inserted: " << x << "\n";
            return;
        }
 
       
        if (x < minEle)
        {
            s.push(2*x - minEle);
            minEle = x;
        }
 
        else
           s.push(x);
 
        cout <<  "Number Inserted: " << x << "\n";
    }
};
 

int main()
{
    MyStack s;
    int n,m;
    while(1){
    	cout<<"\nEnter 1 to push	||	2 to pop	||	3 to get Minimum Number in Stack	||	any key to exit\n";
    	cin>>n;
    	if(n==1){
    		cout<<"\nEnter Element to push:";
    		cin>>m;
    		s.push(m);
		}
		else if(n==2){
			s.pop();
		}
		else if(n==3){
			s.getMin();
		}
		else break;
	}
    
 
    return 0;
}
