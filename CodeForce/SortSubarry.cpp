#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t;
    cin>>t;
    while(t--){
       long long int n,l=0,r=0;
        cin>>n;
       long long int arr1[n],arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
       long long int min=*min_element(arr1,arr1+n);
       long long int max=*max_element(arr1,arr1+n);
        if(arr1[0]==min) l=1;
        for(int i=0;i<n;i++){
            if(arr1[i]!=arr2[i] && l==0) l=i+1;
            if(arr1[i]!=arr2[i]) r=i+1;
            
    }
    if(arr2[n-1]==arr1[n-1] && max==arr1[n-1]) r==n;
    cout<<l<<" "<<r<<endl;
}
}
