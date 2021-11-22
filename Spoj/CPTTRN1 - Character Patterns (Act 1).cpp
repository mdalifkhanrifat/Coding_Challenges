#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n,m,t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;

        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(i%2!=0)
                {
                    if(j%2!=0)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<".";
                    }
                }
                else
                {
                    if(j%2!=0)
                    {
                        cout<<".";
                    }
                    else
                    {
                        cout<<"*";
                    }
                }
            }
            cout<<"\n";
        }
        if(t!=0)
        {
            cout<<"\n";
        }
    }
    return 0;
}
