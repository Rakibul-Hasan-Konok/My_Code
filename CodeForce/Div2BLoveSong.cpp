#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,m;
 cin>>n>>m;
 string s;
 cin>>s;
 int sum=0,preSum[n];
 int va='a';
 for(int i=0;i<n;i++){
    sum+=s[i]-va+1;
    preSum[i]=sum;
  }
while(m--)
{
  int l,p,len=0;
  cin>>l>>p;
  if(l>1) cout<<preSum[p-1]-preSum[l-2]<<endl;
  else cout<<preSum[p-1]<<endl;

}
       
}   