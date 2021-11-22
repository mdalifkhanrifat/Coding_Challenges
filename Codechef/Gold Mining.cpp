#include<iostream>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n,x,y,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        n+=1;
        n*=y;
        if(n>=x)
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
