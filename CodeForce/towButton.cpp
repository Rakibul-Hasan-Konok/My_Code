#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,a,b,c,ans=0,x,y,cz;
    cin>>n>>a>>b>>c;
    for(x=0;x<=n;x++)
    {
        for(y=0;y<=n;y++)
        {
            cz=n-((x*a)+(b*y));
            if(cz<0)
                break;
            double z=cz/(double)c;

        if(z==(int)z)
        {
            ans=ans>(x+y+(int)z)?ans:(x+y+(int)z);
        }
        }
    }
    cout<<ans;
}
