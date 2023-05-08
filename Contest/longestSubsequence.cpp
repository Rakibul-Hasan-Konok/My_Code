#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]) {
                ans=-1;
                break;
            }
        }
        if(ans==0) cout<<-1<<endl;
        else cout<<s.size()-1<<endl;
    }
    }
