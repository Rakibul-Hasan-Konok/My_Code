#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int t;
   cin>>t;
   while(t--){
    int n,z;
    cin>>n>>z;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int max=*max_element(arr,arr+n);
     if((max|z)>(max&z))cout<<(max|z)<<endl;
     else cout<<(max&z)<<endl;
   }
}