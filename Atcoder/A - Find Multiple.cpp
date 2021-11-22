#include<iostream>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
    optimize();
    int a,b,c,temp;
    cin>>a>>b>>c;
    temp=(b/c)*c;
    if(temp>= a)
    {
        cout<<temp<<"\n";
    }
    else
    {
        cout<<-1<<"\n";
    }
    return 0;
}
