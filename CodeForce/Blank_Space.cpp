#include<bits/stdc++.h>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
        int n,k;
        cin>>n;
        int i,cnt=0,ans=0;
        for(i=0;i<n;i++){
            cin>>k;
            if(k==0){
                 cnt++;
                 if(ans<cnt) {
                ans=cnt;
                 }
            }
            else cnt=0;
           
        }
        cout<<ans<<endl;
      }


}