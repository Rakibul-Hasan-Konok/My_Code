#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,ans=0,max=0;
    cin>>n;
    while(n--){
        int n,m;
        cin>>n>>m;
        ans=ans+m-n;
        if(max<ans) max=ans;
    }
    cout<<max<<endl;
}
