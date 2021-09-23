#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    vector<int> v;
    vector<int> c_sum;
    int i,j,n,t,a,low,heigh;

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    a=v[0];
    c_sum.push_back(a);

    for(i=1; i<n; i++)
    {

        a=c_sum[i-1]+v[i];
        c_sum.push_back(a);
    }

    cin>>t;
    while(t--)
    {
        cin>>low>>heigh;

        if(low==0)
        {
            cout<<c_sum[heigh]<<"\n";
        }
        else
        {
            cout<<c_sum[heigh]-c_sum[low-1]<<"\n";
        }
    }

    return 0;
}
