#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> a(n);
      int pos=0,neg=0;
      for(int i=0;i<n;i++){
         cin>>a[i];
         if(a[i]>0)pos++;
         else neg++;
      }
      int ans=0;
      while(neg>pos){
         neg--;
         pos++;
         ans++;
      }
      if(neg%2==1){
         ans++;
      }
      cout<<ans<<endl;
   }
   return 0;
}