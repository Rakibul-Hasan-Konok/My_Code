#include<bits/stdc++.h>
using namespace std;
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
int main( )
{
   int t;
   cin>>t;
   while(t--){
    int n,k;
    cin>>n;
    set<int> st;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int visited=0;
        in_range_back(i,0,n-1){
            st.insert(a[i]);
            visited++;
            if(visited>st.size()){
                break;
            }
        }
 
    cout<<n-st.size()<<endl;
   }
}