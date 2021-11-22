#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    long long int t,n,sum1,sum2,sum3,sum4,sum5;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=1 && n<=10000)
        {
            sum1= (n*(n+1))/2;
            cout<<sum1<<" ";

            sum2= (n*((2*2)+(n-1)*2))/2;
            cout<<sum2<<" ";

            sum3= (n*((2*1)+(n-1)*2))/2;
            cout<<sum3<<" ";

            sum4= (n*(n+1)*(2*n+1))/6;
            cout<<sum4<<" ";

            sum5= sum1*sum1;
            cout<<sum5<<"\n";
        }
    }

    return 0;
}
