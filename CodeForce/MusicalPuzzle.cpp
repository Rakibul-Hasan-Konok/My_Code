#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    set<pair<char,char>> setpair;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++){
        setpair.insert({s[i],s[i+1]});
        
    }
cout<<setpair.size()<<endl;
}

}