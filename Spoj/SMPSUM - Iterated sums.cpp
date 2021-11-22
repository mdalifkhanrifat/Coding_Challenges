#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int a,b,i,sum;
    cin>>a>>b;
    sum=0;
    for(i=a;i<=b;i++)
    {
        sum+= i*i;
    }
    cout<<sum<<"\n";
    return 0;
}
