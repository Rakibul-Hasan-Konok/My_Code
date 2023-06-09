#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    char c;
    while(cin>>n>>a)
    {
        c='X';
        for(int i=0;i<n;i++)
        {/
               if(c=='X')c=a[i];
           else if(a[i]==c)cout<<c,c='X';
        }
        cout<<endl;
    }
}