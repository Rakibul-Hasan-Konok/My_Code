#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int ar[4],cnt=0;
    for(int i=0;i<4;i++) cin>>ar[i];
    sort(ar,ar+4);
    for(int i=0;i<4-1;i++){
        if(ar[i]==ar[i+1]) cnt++;
    }
    cout<<cnt<<endl;
}