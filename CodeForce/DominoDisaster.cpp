#include<bits/stdc++.h>
using namespace std;
long long int mod=1000000007;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='U') cout<<"D";
   else if(s[i]=='D') cout<<"U";
    else cout<<s[i];
}
cout<<endl;

    }

}