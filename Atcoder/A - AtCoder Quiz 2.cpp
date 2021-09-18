#include<iostream>
using namespace std;
int main()
{

    int x,ans;
    scanf("%d",&x);

    if(x<40)
    {
        ans=40-x;
        printf("%d\n",ans);
    }
    else if(x<70)
    {
        ans=70-x;
        printf("%d\n",ans);
    }
    else if(x<90)
    {
        ans=90-x;
        printf("%d\n",ans);
    }
    else
    {
        printf("expert\n");
    }


    return 0;
}
