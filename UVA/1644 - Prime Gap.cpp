#include<bits/stdc++.h>
using namespace std;
//#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

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
    prime.push_back(2);
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
    //optimize();

    int i,ter,n,ans;
    int c2,sum;

    prim_gen(1000005);
    //n=prime.size();


      while(scanf("%d",&n),n!=0)
    {


    }
    return 0;
}

