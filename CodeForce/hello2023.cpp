#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n,m,ans=-1,i;
		string s;
		cin>>n>>s;
		for(i=0;i<n;i++){
			if(s[i]=='R' && s[i+1]=='L'){
				ans=0;
				break;
			}
			else if(s[i]=='L' && s[i+1]=='R'){
				ans=i+1;
				break;
			}
		}
		cout<<ans<<endl;
	}
}