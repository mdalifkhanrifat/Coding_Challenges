
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t,n,a,x,i,j,odd,even,cou,cou2,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=cou=cou2=odd=even=0;
        for(i=0; i<n; i++)
        {
            cin>>x;
            sum+=x;
            if(x%2!=0 && cou==0)
            {
                odd= 1;
                cou++;
            }

            if(x%2==0 && cou2==0)
            {
                even= 1;
                cou2++;
            }

        }
        if(sum%2!=0 || (odd==1  && even==1))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}
