#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{  
   int n,k;
   cin>>n>>k;
   int ans=round(n/k);
   if(2*ans>=ans) cout<<ans<<endl;
   else cout<<2*n<<endl;
}
}