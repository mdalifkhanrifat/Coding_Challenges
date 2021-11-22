#include<iostream>
#include<string>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int ans=3;
    string s;
    cin>>s;

    if(s[0]==s[1] && s[0]==s[2])
    {
        ans=1;
    }
    else if( (s[0]==s[1] && s[0]!=s[2]) || (s[0]!=s[1] && s[1]==s[2]) )
    {
        ans=2;
    }
    else if( s[0]!=s[1] && s[1]!=s[2] && s[2]!=s[0] )
    {
        ans=6;
    }
    else
    {
        ans=3;
    }

    cout <<ans<<"\n";

    return 0;
}
