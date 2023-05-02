#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{  
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int cnt=0;
    for(int i=0;i<3;i++){
        if(s[i]==s[i+1]) cnt++;
    }
    if(cnt==3) cout<<-1<<endl;
    else if(cnt==2) {
        cnt=0;
        for(int i=0;i<3;i++){
        if(s[i]!=s[i+1] && i==2) cnt++;
    }
        
      if(cnt==1)  cout<<4<<endl;
      else cout<<6<<endl;
    
    }
    else cout<<4<<endl;

}
}