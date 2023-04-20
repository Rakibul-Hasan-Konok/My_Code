#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int k=0;
        for(int i=0;i<s.size();i++){
        if(s[i]='9' && s.size()==1) {
            cout<<1<<endl;
            k++;
            break;}
        else if(s[i]='0' && s.size()==1) {
            cout<<0<<endl;
            k++;
            break;}
        else if(s[i]=='?' && s[i+1]=='?') {
            cout<<100<<endl;
            k++;
            break;}
            else if(s[i]=='?' && s[i+1]!='?') {
            cout<<90<<endl;
            break;}
            else{
                k=0;
            }

        }
        if(k==0) cout<<0<<endl;
        
        }

    }

