#include<iostream>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
    optimize();

    long long int a,b,sub,i,ans=32;
    cin>>a>>b;
    if(a>b)
    {
        sub=a-b;
    }
    else
    {
        sub=b-a;
    }

    if(sub==0)
    {
        cout<<1<<"\n";
    }
    else
    {
        for(i=1;i<sub;i++)
        {
            ans*=32;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
