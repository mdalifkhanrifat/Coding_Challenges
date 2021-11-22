// ans: WA
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool pri[10000000];
int main()
{

    optimize();
    int i,j,n=10000000,sq,k,t,a;
    pri[2]=1;
    for(i=3; i<=n; i+=2)
    {
        pri[i]=1;
    }
    sq=sqrt(n);
    for(i=3; i<=sq; i+=2)
    {
        if(pri[i]==1)
        {
            for(j=i+i; j<=n; j+=i)
            {
                pri[j]=0;
            }
        }
    }

    cin>>t;
    char c;
    while(t--)
    {
        scanf("%d",&a);
        scanf("%*c");
        if(pri[a]==1)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }

    return 0;
}
