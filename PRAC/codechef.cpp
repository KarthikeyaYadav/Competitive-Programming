#include<stdio.h>
#include <map>
#include <iterator>
#include<stdlib.h>
using namespace std;
int main(){
	int n,q;
	scanf("%d",&n);
	scanf("%d",&q);
	map <int, int> gquiz1;
	for(int i=0;i<n;i++){
		int x,y;
			scanf("%d",&x);
	scanf("%d",&y);
	gquiz1.insert(pair <int, int> (x, y));
	}
	map <int, int> :: iterator itr;
	
	for(int i=0;i<q;i++){
		int x1,y1,x2,y2,count=0;
		scanf("%d",&x1);
	scanf("%d",&y1);
	scanf("%d",&x2);
	scanf("%d",&y2);
	if(x1==x2 && y1==y2)
	printf("0\n");
	else{
		if(x1==x2){
			count=abs(y1-y2);
			printf("%d\n",count);
		}
		else{
			count=abs(x1-x2)+1;
			//cout<<"vcount:"<<count<<endl;
			int a,b;
			if(x1>x2){
				a=x2;
				b=x1;
			}
			else{
				a=x1;
				b=x2;
			}
			int max=0;
			
			for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        if(itr->first>=a && itr->first<=b && itr->second>max)
        max=itr->second;
    }
    if(max<y1)
    max=y1;
     if(max<y2)
    max=y2;
    //cout<<"max:"<<max<<endl;
    //int u=abs(max-y1);
    //int uu=abs(max-y2);
    //cout<<u<<" "<<uu<<endl;
    count=count+abs(max-y1)+abs(max-y2)+1;
    printf("%d\n",count);
		}
	}
	}
	return 0;
}
