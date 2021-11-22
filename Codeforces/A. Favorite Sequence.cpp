#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
    optimize();
    long long int a[312],b[312];
    int t,n,l,r,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        l=0;
        r=n-1;
        i=0;
        while(l<=r)
        {
            b[i++]=a[l];
            b[i++]=a[r];
            l++;
            r--;
        }
        if(n%2==0)
        {
            b[i++]=a[r];
        }
        n=i;

        for(i=0; i<n-1; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
