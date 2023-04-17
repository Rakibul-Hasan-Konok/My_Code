#include<bits/stdc++.h>
using namespace std;
long long int mod=1000000007;
int main(){
      int t;
      cin>>t;
      while(t--){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        cout<<s[s.size()-1]<<endl;
      }


}