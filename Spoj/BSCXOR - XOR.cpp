#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int a,b,ans;
    cin>>a>>b;
    ans=  a+b-(2*(a&b));
    cout<<ans<<"\n";
    return 0;
}
