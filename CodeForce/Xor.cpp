#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
     cin>>v[i];
}
int x=0;
for(int i=0;i<n;i++){
   x^=v[i]; 
}
for(int i=0;i<n;i++){
   v[i]^=x; 
}
int y=0;
for(int i=0;i<n;i++){
   y^=v[i]; 
}
if(y==0) cout<<x<<endl;
else cout<<-1<<endl;
}
}