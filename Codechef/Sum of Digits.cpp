#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n,sum=0,m,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        while(n>0)
        {
            m=n%10;
            sum=sum+m;
            n=n/10;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
