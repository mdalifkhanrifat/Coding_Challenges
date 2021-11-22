#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void prime_number(int n);
char pri[90000001];
vector<int> prime;

int main()
{
    optimize();
    prime_number(90000001);
    int t,n,cou,i;
    cin>>t;

    while(t--)
    {
        cin>>n;
        cou=0;
        for(i=0;prime[i]<=n;i++)
        {
            cou++;
        }
        cout<<cou<<"\n";
    }
    return 0;
}

void prime_number(int n)
{
    int i,j,sq;
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
    prime.push_back(2);
    for(i=3; i<=n; i+=2)
    {
        if(pri[i]==1)
        {
            prime.push_back(i);
        }
    }
}
