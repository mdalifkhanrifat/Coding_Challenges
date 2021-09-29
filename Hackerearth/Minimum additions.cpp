#include<iostream>
#include<stdio.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
    optimize();
    long long int t,n,k,a,x,i,temp;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        a=0;
        for(i=0; i<n; i++)
        {
            cin>>x;
            a+=x;
        }
        if(k>=(a/n))
        {
            cout<<0<<"\n";
        }
        else
        {
            temp=a/(k+1)-n+1;
            cout<<temp<<"\n";
        }
    }

    return 0;
}
