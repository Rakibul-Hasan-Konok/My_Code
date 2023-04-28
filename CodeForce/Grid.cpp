#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int t;
    cin>>t;
    while(t--){
       long long int x,y;
        cin>>x>>y;
        if(abs(x-y)==1) {
            cout<<1<<endl;
            cout<<x<<" "<<y<<endl;
            }
        else{
            if(x+1 > 1e9) 
            {    cout<<2<<endl;
                cout<<x-1<<" "<<1<<endl;
                cout<<x<<" "<<y<<endl;
            }
            else {  cout<<2<<endl;
                cout<<x+1<<" "<<1<<endl;
                cout<<x<<" "<<y<<endl;
            }
        }
        return 0;
}
}