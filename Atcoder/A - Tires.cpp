#include<iostream>
#include<string>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    string s;
    cin>>s;
    if(s.back()=='r')
    {
        cout<<"er\n";
    }
    if(s.back()=='t')
    {
        cout<<"ist\n";
    }

    return 0;
}
