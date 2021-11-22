#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    unsigned int n,sum,t,cou1,cou2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cou2=n%10;
        cou1=n;
        while(n>=10)
        {
            n=n/10;
        }
        cou1=n;
        sum=cou1+cou2;
        cout<<sum<<endl;
    }
    return 0;
}
