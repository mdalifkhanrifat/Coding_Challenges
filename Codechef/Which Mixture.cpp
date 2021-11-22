#include<iostream>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
    optimize();
    int a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>0 && b>0)
        {
            cout<<"Solution\n";
        }
        else if(b==0)
        {
            cout<<"Solid\n";
        }
        else
        {
            cout<<"Liquid\n";
        }
    }
    return 0;
}
