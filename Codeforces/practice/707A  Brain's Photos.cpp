#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n,n2,i,j,cou=0;
    char c;
    cin>>n>>n2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n2;j++)
        {
            cin>>c;
            if(c=='C' || c=='M' || c=='Y')
            {
                cou++;
            }
        }
    }

    if(cou==0)
    {
        cout<<"#Black&White"<<"\n";
    }
    else
    {
        cout<<"#Color"<<"\n";
    }


    return 0;
}
