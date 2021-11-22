#include<iostream>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int a;
    cin>>a;
    if(a==0||a%100!=0)
    {
        cout<<"No\n";
    }
    else
    {
        cout<<"Yes\n";
    }
    return 0;
}
