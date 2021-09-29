#include<iostream>
#include<stdio.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
    optimize();

    int t,x,y,z,cou;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        cou=(2*z)+x;
        if(cou>=y)
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
