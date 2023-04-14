#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{    vector<int> v(4),a;
   for(int i=0;i<4;i++) cin>>v[i];
   a=v;
   sort(a.begin(),a.end());
   int max1=max(v[0],v[1]);
   int max2=max(v[2],v[3]);
   if((max1==a[3] || max1==a[2]) && (max2==a[3] || max2==a[2]) ) cout<<"YES\n";
   else cout<<"NO\n";

}
return 0;
}