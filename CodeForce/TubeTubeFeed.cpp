#include<bits/stdc++.h> 
typedef long long int ll;
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int ar[n],aa[n],cnt=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            cin>>aa[i];
        }
        int ans=0,i=0,index=-1;
        while(k && i<n)
        {
            if(ar[i]<=k)
            {
               if(aa[i]>ans)
               {
                   ans=aa[i];
                   index=i+1;
               }
            }
            i++;
            k--;
        }
        cout<<index<<endl;
    }
    }
    
