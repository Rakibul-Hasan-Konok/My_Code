#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   int t;
   cin>>t;
   while(t--){
    int n,s=0,x,y,z;
    cin>>n;
    cin>>y;
    x=y;
    cout<<1;
    for(int i=1;i<n;i++)
    {
        cin>>z;
        if(s==0)
        {
            if(z>=y)cout<<1,y=z;
            else if(z<=x)cout<<1,s=1,y=z;
            else cout<<0;
        }
        else if(s==1)
        {
            if(x>=z &&y<=z)cout<<1,y=z;
            else cout<<0;
        }
    }
    cout<<endl;
   }
}
