#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int arr[n],i,ans=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=1;i<=n;i++){
       ans=__gcd(ans,abs(arr[i-1]-i));

   }
   printf("%d\n",ans);
}
}