#include<iostream>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int a,n,x,i,cou=0;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a<x)
        {
            cou++;
        }
    }
    cout<<cou<<"\n";
    return 0;
}
