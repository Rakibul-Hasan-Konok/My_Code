#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    
int a,b;               
        cin>>a>>b;
        a=abs(a);
        b=abs(b);
        int ans=a+b;
        int diff=abs(a-b)-1;
        ans+=max(0,diff);
        cout<<ans<<endl;

}
}


        
