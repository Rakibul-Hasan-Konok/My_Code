#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

    int n,k;
    cin>>n;
    string s,st="meow";
    cin>>s;
    for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
    k=1;
    if(st[0]==s[0] && s[n-1]=='w'){
    for(int i=1;i<s.size();i++)
    {   
    //     if((s[i]!='m') || (s[i]!='e') || (s[i]!='o') || (s[i]!='w')){
    //         k=0;
    //         break;
    //     }
        if(s[i]==s[i-1]) continue;
        else if(st[k]!=s[i]){
              k=0;
              break;
        } 
        else{
            k++;
        }
    }
    }
    if(k>=3) cout<<"YES\n";
    else cout<<"NO\n";
}
}
