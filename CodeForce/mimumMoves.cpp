#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        if(n<k || n%k!=0){
         cout<<1<<endl;
         cout<<n<<endl;
         continue;
      }
 
      cout<<2<<endl;
      cout<<1<<" "<<(n-1)<<endl;
   }
}
