#include<bits/stdc++.h>
using namespace std;
long long int mod=1000000007;
int main(){
    long long int t;
    cin>>t;
    while(t--){
    //    long long int n,i=1,j=1,ans=1,k=1;
    long long int n;   
    cin>>n;
    //     while(1){
    //     if(k%2!=0){
    //        i++;
    //        ans+=i*j;
    //     }
    //     else{
    //         j++;
    //         ans+=i*j;
    //     }
    //     if(j==n && i==n){
    //         break;
    //     }
    //       k++;  
    //     }
    //    long long int mod=(10e9+7);
    //     cout<<((2022*ans)%mod)<<endl;
    long long int ans=0;
    ans=((((n*(n+1))%mod)*(4*n-1))%mod*337)%mod;
    cout<<ans<<endl;
    
    }

}