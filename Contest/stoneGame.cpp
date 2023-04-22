#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
;
while(t--)
{
    int a,m,mi,x=0,y=0,n,aa[3];
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   mi=1;
   m=n;
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]==mi)
        {
            x=i+1;
        }
        if(arr[i]==m)
        {
            y=i+1;
        }
    }
    m=max(x,y);
    mi=min(x,y);
n++;
aa[0]=m;
aa[1]=n-mi;
aa[2]=n-m+mi;
sort(aa,aa+3);
cout<<aa[0]<<endl;
}

}