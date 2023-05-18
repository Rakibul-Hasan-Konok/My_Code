#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,ans=0,has=1;
    cin>>a>>b;
    while(has<b){
        ans++;
        has--;
        has+=a;
    }
   cout<<ans<<endl;

}