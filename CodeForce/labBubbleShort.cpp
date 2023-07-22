#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10],i,j,temp,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    // int nm=n;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            
            }
        }
        //nm--;
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }


}