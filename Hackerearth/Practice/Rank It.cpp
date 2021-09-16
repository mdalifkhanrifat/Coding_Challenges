#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    vector<int> v;
    int n,ter,i,mid,l,r,a,t;
    cin>>n;
    v.push_back(0);
    for(i=1;i<=n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    cin>>t;
    while(t--)
    {

        l=1;
        r=n;
        cin>>ter;
        while(l<=r)
        {
            mid=(r+l)/2;
            if(v[mid]==ter)
            {
                printf("%d\n",mid);
                break;
            }
            if(v[mid]<ter)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
    }


    return 0;
}
