#include<bits/stdc++.h>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
        int n,ans=0,Bigsequence=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            Bigsequence++;
            if(i==n-1 || s[i+1]!=s[i]){
                ans=max(ans,Bigsequence);
                Bigsequence=0;
            }
        }
         cout<<ans+1<<endl;
      }
     
}