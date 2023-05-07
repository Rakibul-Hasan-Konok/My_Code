#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
    cin >> t;
    while (t--)
    {
        string s, s1 = "codeforces";
        cin >> s;
      int cnt = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != s1[i])
               { cnt++;}
        }
        cout << cnt << endl;
    }
    }
