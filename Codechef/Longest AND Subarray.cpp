#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
    optimize();
    long long int t,n,temp,coun,ans1,ans2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        temp=log2(n);
        coun= 1<<temp;
        ans1= n-coun+1;
        ans2= coun/2;
        cout<<max(ans1,ans2)<<"\n";
    }

    return 0;
}
