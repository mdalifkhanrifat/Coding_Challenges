#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool prime_check(int n);
int main()
{
    optimize();
    int t,n,m,cou,i;
    cin>>t;

    while(t--)
    {
        cin>>n;
        if(prime_check(n))
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}

bool prime_check(int n)
{
    int sq,i,cou;
    if(n<2)
    {
        return false;
    }
    else if(n==2)
    {
        return true;
    }
    else if(n%2==0)
    {
        return false;
    }
    else
    {
        sq=sqrt(n);
        cou=0;
        for(i=3; i<=sq; i++)
        {
            if(n%i==0)
            {
                cou++;
                return false;
            }
        }
        if(cou==0)
        {
            return true;
        }
    }
}
