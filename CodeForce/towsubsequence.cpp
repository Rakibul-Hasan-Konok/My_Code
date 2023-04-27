// #include<bits/stdc++.h>
// using namespace std;
// int main( )
// {
//    int t;
//    cin>>t;
//    while(t--){
//    long long int n,sum=0,mx=INT_MIN;
//     cin>>n;
//    long long int a[n];
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//          sum+=a[i];
//          mx=max(mx,a[i]);
//     }
//     //int max=*max_element(a,a+n);
//     sum=sum-mx;
//     double x=(float)sum/(n-1);
//     printf("%.9lf",mx+x);


//    }

// }

#include<bits/stdc++.h> 
typedef long long int ll;
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--) 
    {
       ll n,i,mx=INT_MIN;
       cin>>n;
       ll ar[n],sum=0;
       for(i=0;i<n;i++)
       {
        cin>>ar[i];
        sum+=ar[i];
        mx=max(mx,ar[i]);
       }
       sum=sum-mx;
       double x = (float)sum/(n-1);
       printf("%0.9lf\n",mx+x);
    } 
    return 0;
}