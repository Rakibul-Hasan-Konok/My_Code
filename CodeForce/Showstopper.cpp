#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
   int n;
   cin>>n;
   vector<int> a1(n),a2(n);
   for(int i=0;i<n;i++) cin>>a1[i];
   for(int i=0;i<n;i++) cin>>a2[i];
   for(int i=0;i<n;i++) {
   if(a1[i]<a2[i]) swap(a1[i],a2[i]);
   }
   int max1=*max_element(a1.begin(),a1.end());
   int max2=*max_element(a2.begin(),a2.end());
   if(max1==a1[n-1] && max2==a2[n-1]) cout<<"YES\n";
   else cout<<"NO\n";

  }

}