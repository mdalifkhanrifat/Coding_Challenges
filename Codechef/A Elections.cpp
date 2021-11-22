
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n,m,k,t,tmp1,tmp2,tmp3;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;

        cout<<(max(0, max(m, k) + 1 - n))<<" "<<(max(0, max(n, k) + 1 - m))<<" "<<(max(0, max(n, m) + 1 - k))<<"\n";
    }

    return 0;
}
