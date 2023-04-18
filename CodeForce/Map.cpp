#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int t;
    cin >> t;
    while(t--)
    {
       int n,k,cnt=0;
       cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
        if((arr[i]<arr[i+1]) && ((arr[i+1]-arr[i])==1)){

        }
        else {
            cnt++;
        }

        }



        if(cnt <= k)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}