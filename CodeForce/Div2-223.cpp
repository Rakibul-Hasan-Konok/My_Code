#include<bits/stdc++.h>
using namespace std;
int main(){
 long long int n,s=0,d=0,i=2;
  cin>>n;
  vector<int>v;
  v.resize(n);
  for(int i=0;i<n;i++) cin>>v[i];
 // sort(v.begin(),v.end(),greater<int>());
while(!v.empty()){

if((v[0]>v[n-1]) && i%2==0) {
    s+=v[0];
    v.erase(v.begin());

}
else if((v[0]<=v[n-1]) && i%2==0) {
        s+=v[n-1];
        v.pop_back();
        }
else if((v[0]>v[n-1]) && i%2!=0) {
    d+=v[0];
    v.erase(v.begin());

}
else if((v[0]<=v[n-1]) && i%2!=0) {
        d+=v[n-1];
        v.pop_back();
        }
        i++;
        n=v.size();
        }
cout<<s<<" "<<d<<endl;
return 0;
}
