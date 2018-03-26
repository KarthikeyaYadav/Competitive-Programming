#include <bits/stdc++.h>
using namespace std;
 
class LRUCache
{
    
    list<int> dq;
 
    
    unordered_map<int, list<int>::iterator> ma;
    int csize; 
 
public:
    LRUCache(int);
    void refer(int);
    void display();
};
 
LRUCache::LRUCache(int n)
{
    csize = n;
}
 

void LRUCache::refer(int x)
{
    
    if (ma.find(x) == ma.end())
    {
      
        if (dq.size() == csize)
        {
           
            int last = dq.back();
            dq.pop_back();
            ma.erase(last);
        }
    }
 
   
    else
        dq.erase(ma[x]);
 
   
    dq.push_front(x);
    ma[x] = dq.begin();
}
 

void LRUCache::display()
{
    for (auto it = dq.begin(); it != dq.end();
                                        it++)
        cout << (*it) << " ";
 
    cout << endl;
}
 

int main()
{
	int n,m,x;
	cout<<"Enter the size of cache:";
	cin>>n;
    LRUCache ca(n);
    cout<<"\nEnter Number of references you want to make:";
    cin>>m;
 for(int i=0;i<m;i++){
 	cin>>x;
 	ca.refer(x);
 }
    
    ca.display();
 
    return 0;
}
