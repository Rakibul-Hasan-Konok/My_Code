#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int cnt=0;
    cin>>n>>m;
    while(n<m)
    {
        if(m%2==0)
        {
            m=m/2;
            cnt++;
        }
        else
        {
            m++;
            cnt++;
        }
    }
    cnt+=n-m;
    cout<<cnt<<endl;
}
