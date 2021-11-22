#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void prime_number(int n);
char pri[100000000];

int main()
{
    optimize();
    prime_number(100000000);
    return 0;
}
void prime_number(int n)
{
    int i,j,sq,cou=1;
    pri[2]=1;
    for(i=3; i<=n; i+=2)
    {
        pri[i]=1;
    }
    sq=sqrt(n);
    for(i=3; i<=sq; i+=2)
    {
        if(pri[i]==1)
        {
            for(j=i+i; j<=n; j+=i)
            {
                pri[j]=0;
            }
        }
    }
    cout<<2<<"\n";
    for(i=3; i<=n; i+=2)
    {
        if(pri[i]==1)
        {
            cou++;
            if(cou%100==1)
            {
                cout<<i<<"\n";
            }

        }
    }
}
