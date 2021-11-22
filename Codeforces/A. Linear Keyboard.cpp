#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t,i,j,coun,sum,size1,size2;
    string s,s2;
    vector<int> v;
    cin>>t;

    while(t--)
    {
        scanf("%*c");
        cin>>s;
        scanf("%*c");
        cin>>s2;

        size1=s.size();
        size2=s2.size();

        for(i=0;i<size2;i++)
        {
            for(j=0;j<size1;j++)
            {
                if(s2[i]==s[j])
                {
                    v.push_back(j+1);
                    break;
                }
            }
        }
        sum=0;
        for(i=1;i<v.size();i++)
        {
            sum+= abs(v[i-1]-v[i]);
        }
        cout<<sum<<"\n";
        v.clear();
    }

    return 0;
}
