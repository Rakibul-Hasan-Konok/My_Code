#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    ll i,count=0;
    getline(cin,s);
   //cin>>s;
    sort(s.begin(),s.end());
     ll n,c;
    n=s.length();
    c=n/3;
    for(i=n-3; i>(n-(3+c)); i--)
    {
        if(s[i]!=s[i-1])
            count++;
    }
    cout << count << endl;
}