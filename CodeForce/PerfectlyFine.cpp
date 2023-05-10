#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int t;
   cin>>t;
   while(t--){
      int n;
      string s;
      cin>>n;
      int k,l=111111111,n1=111111111,m=111111111;
      for(int i=0;i<n;i++){
        cin>>k>>s;
        if(s[0]=='0' && s[1]=='1') {
            if(k<l) l=k;
        }
        if(s[0]=='1' && s[1]=='0') {
            if(k<m) m=k;
        }
        if(s[0]=='1' && s[1]=='1') {
            if(k<n1) n1=k;
        }
      }
   int ans=min(l+m,n1);
   if(ans>=111111111) ans=-1;

cout<<ans<<endl;

   }


   }
