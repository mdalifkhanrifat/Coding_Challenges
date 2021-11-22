#include<iostream>
#include<stdio.h>
using namespace std;
//#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    //optimize();
    int n,m,i,j,cou1,cou2,t;
    char ch;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cou1=cou2=0;
        for(i=0; i<n; i++)
        {
            scanf("%*c");
            cou1=0;
            for(j=0; j<m; j++)
            {
                scanf("%c",&ch);
                if(ch=='#')
                {
                    cou1++;
                }
            }
            if(cou2<=cou1)
            {
                cou2=cou1;
            }
        }
        cout<<cou2<<"\n";
    }

    return 0;
}
