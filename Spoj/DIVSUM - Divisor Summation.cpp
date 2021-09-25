#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int i,n,t,sum,sq;

    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        sq=sqrt(n);

        for(i=1; i<=sq; i++)
        {
            if(n%i==0)
            {
                sum+=i;
                if(n/i!=i )
                {
                    if(n/i!=n)
                    {
                        sum+=n/i;
                    }
                }
            }
        }
        if(n>1)
        {
            cout<<sum<<"\n";
        }
        else
        {
            cout<<0<<"\n";
        }
    }

    return 0;
}
