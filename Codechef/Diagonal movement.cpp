//  WA
#include<iostream>
#include<stdio.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
    optimize();


    int t,x,y,cou;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;


        if(x==0 && y>0)
        {
            cout<<"YES\n";
        }
        else if(x>0 && y>0)
        {
            cout<<"NO\n";
        }
        else if(x<0 && y<0)
        {
            cout<<"YES\n";
        }
        else if(x<0 && y==0)
        {
            cout<<"NO\n";
        }
        else if(x<0 && y>0)
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
