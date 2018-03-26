#include<bits/stdc++.h>
using namespace std;
 
class Graph
{
    int V;    
    list<int> *adj;   
    bool isCyclicUtil(int v, bool visited[], bool *rs);  
    bool isCyclicUtil1(int v, bool visited[], int parent);
public:
    Graph(int V);   
    void addEdge(int v, int w); 
	void addEdge1(int v, int w);  
    bool isCyclic();  
	bool isCyclic1();  
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); 
}
 

void Graph::addEdge1(int v, int w)
{
    adj[v].push_back(w); 
    adj[w].push_back(v); 
}

bool Graph::isCyclicUtil(int v, bool visited[], bool *recStack)
{
    if(visited[v] == false)
    {
        visited[v] = true;
        recStack[v] = true;
 
        
        list<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            if ( !visited[*i] && isCyclicUtil(*i, visited, recStack) )
                return true;
            else if (recStack[*i])
                return true;
        }
 
    }
    recStack[v] = false;  
    return false;
}
 

bool Graph::isCyclic()
{
    
    bool *visited = new bool[V];
    bool *recStack = new bool[V];
    for(int i = 0; i < V; i++)
    {
        visited[i] = false;
        recStack[i] = false;
    }
 
    for(int i = 0; i < V; i++)
        if (isCyclicUtil(i, visited, recStack))
            return true;
 
    return false;
}

bool Graph::isCyclicUtil1(int v, bool visited[], int parent)
{
    visited[v] = true;
 
    
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        
        if (!visited[*i])
        {
           if (isCyclicUtil1(*i, visited, v))
              return true;
        }
 
        
        else if (*i != parent)
           return true;
    }
    return false;
}
 

bool Graph::isCyclic1()
{
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    
    for (int u = 0; u < V; u++)
        if (!visited[u]) 
          if (isCyclicUtil1(u, visited, -1))
             return true;
 
    return false;
}
 
int main()
{
	char choice;
	cout<<"Do You Want To Detect Cycle in Directed Graph?(Y/N):";cin>>choice;

    int n,a,b;
    if(choice=='N'){
    	cout<<"\nEnter Number of Vertices In Undirected Graph:";
    cin>>n;
    Graph g(n);
    cout<<"\nEnter The Undirected Edges In The Graph and Enter -1 to stop(Indexed From zero):";
    while(1){
    	cin>>a;
    	if(a==-1){
    		break;
		}
		else{
			cin>>b;
			g.addEdge1(a,b);
		}
	}
 
    if(g.isCyclic1())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
	}
	else{
	
	cout<<"\nEnter Number of Vertices In Graph:";
    cin>>n;
    Graph g(n);
    cout<<"\nEnter The Directed Edges In The Graph and Enter -1 to stop(Indexed From zero):";
    while(1){
    	cin>>a;
    	if(a==-1){
    		break;
		}
		else{
			cin>>b;
			g.addEdge(a,b);
		}
	}
 
    if(g.isCyclic())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
    }
    return 0;
}
