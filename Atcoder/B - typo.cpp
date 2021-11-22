#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
    optimize();
    string s1,s2;
    int i,j,temp;
    cin>>s1>>s2;

    temp=s2.size();
    for(i=0;i<temp;i++)
    {
        if(s1[i]!=s2[i])
        {
            swap(s2[i],s2[i+1]);
            break;
        }
    }


    if(s1==s2)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }

    return 0;
}
