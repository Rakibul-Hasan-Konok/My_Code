#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int t;
   cin>>t;
   while(t--){
    int n,x,y;
    cin>>n;
     x = n / 3;
     y = n / 3;
    if (n % 3 == 1) ++x;
    else if (n % 3 == 2) ++y;
    cout<<x<<" "<<y<<endl;
   }
}