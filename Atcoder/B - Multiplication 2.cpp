#include<iostream>
#include<stdio.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
    optimize();

    int n,i,cou=0,cou2=0;
    long long int a,temp=1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a==0)
        {
            cou2=1;
        }
        else if(temp<= 1000000000000000000/a)
        {
            temp*=a;
        }
        else
        {
            cou=1;
        }
    }

    if(cou2==1)
    {
        cout<<0<<"\n";
    }
    else if(cou==1)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<temp<<"\n";
    }


    return 0;
}
