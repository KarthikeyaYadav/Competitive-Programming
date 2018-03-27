#include <iostream>
using namespace std;
 
int main(void) {
    long T;
    cin>>T;
    while (T--)
    {
        long n;
        cin>>n;
        long a[n][2];
        for (long i=0; i<n; i++)
            cin>>a[i][0]>>a[i][1];
        long ex = n/10;
        for (long i=0; i<n; i++)
        {
            for (long j=i+2; j<n-1; j++)
            {
                if (((a[i][0]+a[j][0])%2==0)&&((a[i][1]+a[j][1])%2==0))
                {
                    cout<<(a[i][0]+a[j][0])/2<<" "<<(a[i][1]+a[j][1])/2<<"\n";
                    ex--;
                }
                if (ex==0)
                    break;
                
            }
                    if (ex==0)
                        break;
            }
        }
        return 0;
    }
 
