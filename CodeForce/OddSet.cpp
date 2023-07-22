#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int k,oddn=0,evenn=0;
    for(int i=0;i<2*n;i++){
       cin>>k;
       if(k%2==0) evenn++;
    }
    if(evenn==n) cout<<"YES\n";
    else cout<<"NO\n";
   }
}