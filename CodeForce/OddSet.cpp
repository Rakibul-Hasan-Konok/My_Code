#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int k,oddNum=0,evenNum=0;
    for(int i=0;i<2*n;i++){
       cin>>k;
       if(k%2==0) evenNum++;
    }
    if(evenNum==n) cout<<"YES\n";
    else cout<<"NO\n";
   }
}