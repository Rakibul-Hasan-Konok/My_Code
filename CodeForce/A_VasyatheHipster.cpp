#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b) cout<<a-(a-b)<<" "<<(a-b)/2<<endl;
    else cout<<b-(b-a)<<" "<<(b-a)/2<<endl;

}