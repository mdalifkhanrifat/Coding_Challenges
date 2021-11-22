
// ans: WA
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool pri[100000];
vector<int> prime;
vector<int> fact;
int main()
{

    optimize();
    int i,j,n=100000,sq,k,t,n2,cou,tmp;
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

    while(scanf("%d",&n2),n2!=0)
    {

        tmp=n2;
        n2=abs(n2);
        for(i=0; i<prime.size(); i++)
        {
            if(prime[i]*prime[i]>n2)
            {
                break;
            }
            else if(n2%prime[i]==0)
            {
                while(n2%prime[i]==0)
                {
                    fact.push_back(prime[i]);
                    n2/=prime[i];
                }
            }
        }
        if(n2>1)
        {
            fact.push_back(n2);
        }


        cou=0;
        cout<<tmp<<" = ";
        if(tmp<0)
        {
            cout<<-1;
            cou++;
        }
        for(auto u:fact)
        {
            if(cou!=0)
            {
                cout<<" x ";
            }
            cout<<u;
            cou++;
        }
        cout<<"\n";
        fact.clear();

    }

    return 0;
}
