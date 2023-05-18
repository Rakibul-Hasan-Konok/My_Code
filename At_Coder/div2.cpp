#include <bits/stdc++.h>
using namespace std;

int main(){
   
   int t;         
    cin>>t;
   while(t--){
      int n,m;             
    cin>>n>>m;
      
      if(n>m)swap(n,m);
      vector<long long> a(n*m);
      for(int i=0;i<n*m;i++){
         cin>>a[i];
      }

      sort(a.begin(),a.end());
      long long int ans1=0;
      ans1=((n*m)-n)*(a[(n*m)-1]-a[0]);
      for(int i=1;i<=(n-1);i++){
         ans1+=(a[(n*m)-2]-a[0]);
      }

      long long int ans2=0;
      ans2=((n*m)-n)*(a[(n*m)-1]-a[0]);
      for(int i=1;i<=(n-1);i++){
         ans2+=(a[(n*m)-1]-a[1]);
      }


      cout<<max(ans1,ans2)<<endl;
   }
   return 0;
}
