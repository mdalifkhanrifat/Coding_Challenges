#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

int main()
{

    vector<string> name;

    int i=0,j,t,cou;
    char c[1001];
    while(scanf("%s",&c),!(c[0]=='1'||c[0]=='2'||c[0]=='3'||c[0]=='4'||c[0]=='5'||c[0]=='6'||c[0]=='7'||c[0]=='8'||c[0]=='9'))
    {
        name.push_back(c);
        scanf("%*c");
    }

    while(c[i]!='\0')
    {

        j=c[i++]-48;
        cout<<name[j-1];
    }
    cout<<"\n";
    return 0;
}

