#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool prime_check(long long n);
int main()
{
    optimize();
    long long int cou=1,i;
    cout<<2<<"\n";
    for(i=3; i<=1000000000; i+=2)
    {
        if(prime_check(i))
        {
            cou++;
            if(cou%500==1)
            {
                cout<<i<<"\n";
            }
        }
    }
    return 0;
}

bool prime_check(long long int n)
{
    long long int sq,i,cou;


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
