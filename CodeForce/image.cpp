#include<bits/stdc++.h>
using namespace std;
int main( )
{
int t;
cin>>t;
while(t--){
  char c[2][2];
  set <char> s;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cin>>c[i][j];
        s.insert(c[i][j]);
    }
  }
  cout<<s.size()-1<<endl;

}
}