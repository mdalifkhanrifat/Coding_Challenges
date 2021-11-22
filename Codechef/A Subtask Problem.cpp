#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n,m,k,t,i,cou,cou1;
    bool a[110];
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        cou=cou1=0;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            if(i<=m)
            {
                if(a[i]==0)
                {
                    cou++;
                }
            }
            if(a[i]==0)
            {
                cou1++;
            }
        }
        if(cou1==0)
        {
            cout<<100<<"\n";
        }
        else if(cou==0)
        {
            cout<<k<<"\n";
        }
        else
        {
            cout<<0<<"\n";
        }

    }

    return 0;
}
