#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
    optimize();
    int n,l,r,i,sereja,dima,a[1012];
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        l=0;
        r=n-1;
        sereja=dima=i=0;
        while(l<=r)
        {
            if(i%2==0)
            {
                if(a[l]>a[i])
                {
                    sereja+=a[l];
                    l++;
                }
                else
                {
                    sereja+=a[r];
                    r--;
                }
            }
            else
            {
                if(a[l]>a[i])
                {
                    dima+=a[l];
                    l++;
                }
                else
                {
                    dima+=a[r];
                    r--;
                }
            }
            i++;
        }

        cout<<sereja<<" "<<dima<<"\n";

    return 0;
}
