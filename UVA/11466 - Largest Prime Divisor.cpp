#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int MX = 1e7+123;
bool pri[MX];
vector<int> prime;
int main()
{

    optimize();
    int i,j,sq,k,t;
    long long n2,cou,tmp;
    vector<long long>fact;

    pri[2]=1;
    for(i=3; i<=1e7; i+=2)
    {
        pri[i]=1;
    }
    sq=sqrt(1e7);
    for(i=3; i<=sq; i+=2)
    {
        if(pri[i]==1)
        {
            for(j=i+i; j<=1e7; j+=i)
            {
                pri[j]=0;
            }
        }
    }
    prime.push_back(2);

    for(i=3; i<=1e7; i+=2)
    {
        if(pri[i]==1)
        {
            prime.push_back(i);
        }
    }

    while(cin>>n2,n2!=0)
    {
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
        auto last = unique(fact.begin(), fact.end());
        fact.erase(last, fact.end());


        if(fact.size()<=1)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<fact.back()<<"\n";
        }

        fact.clear();

    }

    return 0;
}
