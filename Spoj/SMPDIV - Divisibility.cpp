#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int a,b,c,t,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        for(i=1; i<a; i++)
        {
            if(i%b==0 && i%c!=0)
            {
                cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
