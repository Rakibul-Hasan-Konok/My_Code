#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
 
void rh(){
    ll x=0;
    ll Auto[5]={0};
    for(ll i=0;i<5;i++){
        cin>>Auto[i];
      x+=(Auto[i]>=300);
    }
    cout<<"calculate year :"<< x<<endl;
    for(ll i=0;i<5;i++){
    
            cout<<i+1932<<" :"<<Auto[i]<<endl;
    }
    
}
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t=1;
    while(t--){
      rh();
    }
}