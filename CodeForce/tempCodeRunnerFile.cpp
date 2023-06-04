#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n;
    while(cin>>n)
    {
        long long a[n],mi,m;
       cin>>x;mi=m=x;
        for(int i=1;i<n;i++)cin>>x,mi=min(mi,x),m=max(m,x);
        cout<<(mi<0?mi:m)<<endl;
    }
}