#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int t;
   cin>>t;
   while(t--){
    int n,Xor,k;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    for(int i=0;i<n;i++){
        //Xor=ar[i];
        k=0;
        for(int j=0;j<n-1;j++){
           if(i!=j) k=k^ar[j];
        }
        if(ar[i]==k) {
             cout<<k<<endl;
             break;
        }
        
        }
        
    }

   }

