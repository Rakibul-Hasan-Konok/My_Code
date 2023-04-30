#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int n,ascii,upc=0,lwc=0,ok=0;
    cin>>n;
    string s;
    cin>>s;
  for(int i=0;i<n;i++) {
    ascii=s[i];
    if(upc==1 && lwc==1) 
    {
        ok=1;
        break;
    }
    else if(ascii >95 ) upc=1;
    else lwc=1;

  }
  if(ok==1) cout<<"Yes\n";
  else cout<<"No\n";

}