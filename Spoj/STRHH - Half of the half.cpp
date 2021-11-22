#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int i,n,t;
    string s;
    cin>>t;
    while(t--)
    {

        cin>>s;
        n=s.size();
        for(i=0; i<n/2; i++)
        {
            if(i%2==0)
            {
                cout<<s[i];
            }
        }
        cout<<"\n";
    }

    return 0;
}
