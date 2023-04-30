#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int t;
   cin>>t;
   while(t--){
      int a,b,cnt=1;
      cin>>a>>b;
      string s,s1;
      cin>>s;
      a--;
      while(a--){
             cin>>s1;
             if(s==s1) cnt++;
      }
      cout<<cnt<<endl;
   }

}