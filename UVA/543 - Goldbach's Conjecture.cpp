#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool is_prime[1000007];
vector<int> prime;

void prim_gen(int n)
{

    int i,j,n2;

    is_prime[2]=1;
    for(i=3; i<=n; i+=2)
    {
        is_prime[i]=1;
    }
    n2=sqrt(n);
    for(i=3; i<=n2; i+=2)
    {
        if(is_prime[i]==1)
        {
            for(j=i*i; j<=n; j+=(i+i))
            {
                is_prime[j]=0;
            }
        }
    }

    for(i=3; i<=n; i+=2)
    {
        if(is_prime[i]==1)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    optimize();

    int i,ter,n,ans1,ans2,tmp1,tmp2;

    prim_gen(1000005);
    n=prime.size();

    while(cin>>ter,ter>0)
    {
        ans1=0;
        ans2=0;
        for(i=0; i<n; i++)
        {
            tmp1=prime[i];
            tmp2=ter-prime[i];

            if(is_prime[tmp2]==1)
            {
                ans1=tmp1;
                ans2=tmp2;
                break;
            }
        }

        if(ans1==0 && ans2==0)
        {
            cout << "Goldbach's conjecture is wrong.\n";
        }
        else
        {
            cout << ter <<" = " << ans1 << " + " << ans2 << "\n";
        }
    }
    return 0;
}

