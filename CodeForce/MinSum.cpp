#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    long long int OR=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
       
    } 
    for(int i=0;i<n;i++){
        
        OR|=v[i];
    } 
    cout<<OR<<endl;

}
}


