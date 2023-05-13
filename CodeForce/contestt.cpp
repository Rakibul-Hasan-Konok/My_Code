#include<bits/stdc++.h>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
        string s;
    cin >> s;
    if (s.size() % 2 == 1) {
      s.erase(s.begin() + s.size() / 2);
    }
    cout << (s == string(s.size(), s[0]) ? "NO" : "YES") << '\n';
  }
      }


