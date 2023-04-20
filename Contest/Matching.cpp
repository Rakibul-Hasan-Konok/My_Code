#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=1,k=0;
        for(int i=0;i<s.size();i++)
      {
        if(s[0]=='0') {
            cout<<0<<endl;
            k++;
             break;}
        else if(s[0]=='?' && i==0)
         {
             ans*=9;
         }
         else
         {
            if(s[i]=='?') ans*=10;
         }
      }
     if(k==0) cout<<ans<<endl;
        }

    }

