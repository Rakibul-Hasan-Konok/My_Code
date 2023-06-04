#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3]={4,6,7};
    int k;
    cin>>k;
    bool ans=false;
    for(int i=0;i<3;i++){
         if(arr[i]==k) ans=true;
    }
    if(ans) cout<<"Not Accepted\n";
    else cout<<"Accepted\n";
}