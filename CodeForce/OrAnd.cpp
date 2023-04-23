#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int t;
   cin>>t;
   while(t--){
    int n,z,max=0;
    cin>>n>>z;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(max<(z|arr[i])) max=(z|arr[i]); 
    }
     //int max=*max_element(arr,arr+n);
     cout<<max<<endl;
   }
}