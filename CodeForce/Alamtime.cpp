#include<bits/stdc++.h>
using namespace std;
long long int mod=1000000007;
int main(){
      int t;
      cin>>t;
      while(t--){

long long int n,h,m,mh=1e18;
    cin>>n>>h>>m;
    h*=60;
    h+=m;
    
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i]>>b[i];
    	a[i]*=60;
    	a[i]+=b[i];
    	if(a[i]>=h)
    	{
    		mh=min(mh,a[i]-h);
    	}
    	else
    	{
    		mh=min(mh,24*60+a[i]-h);
    	}
    }
    cout<<mh/60<<' '<<mh%60<<"\n";

      }
}