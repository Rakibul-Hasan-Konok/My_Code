#include<bits/stdc++.h>
using namespace std;
int main( )
{
  int n;
  cin>>n;
  int arr[n],a=0,b=0,c=0,k=1;
  for(int i=1;i<=n;i++){
    cin>>arr[i];
    if(k%2==0) b+=arr[i];
    else if(k%3==0) c+=arr[i];
    else a+=arr[i];
    k++;
    if(k==4) k=1;
  }
  if(a>b && a>c) cout<<"chest"<<endl;
  else if(b>a && b>c) cout<<"biceps"<<endl;
  else cout<<"back"<<endl;
}