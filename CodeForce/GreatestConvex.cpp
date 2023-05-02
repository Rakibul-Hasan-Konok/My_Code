#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{  
   long long int n,sum=0;
    cin>>n;
    for(int i=1;i<n;i++) {
        sum*=i;
        }
    if(sum%n==0) cout<<n-1<<endl;
    else cout<<-1<<endl;
}
}