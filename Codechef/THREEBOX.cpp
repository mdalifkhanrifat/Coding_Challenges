#include<iostream>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
    optimize();
    int a,b,c,d,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;

        if(a+b+c<=d)
        {
            cout<<1<<"\n";
        }
        else if(a+b<=d || a+c<=d || b+c<=d )
        {
            cout<<2<<"\n";
        }
        else
        {
            cout<<3<<"\n";
        }

    }
    return 0;
}
