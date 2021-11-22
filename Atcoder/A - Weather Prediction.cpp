
#include<iostream>
#include<string>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    string s;
    cin>>s;
    if(s=="Sunny")
    {
        cout<<"Cloudy\n";
    }
    if(s=="Cloudy")
    {
        cout<<"Rainy\n";
    }
    if(s=="Rainy")
    {
        cout<<"Sunny\n";
    }

    return 0;
}
