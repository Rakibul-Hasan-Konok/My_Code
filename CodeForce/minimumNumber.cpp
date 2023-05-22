#include<bits/stdc++.h>
using namespace std;
#define  in_range_back(i,x,y)  for(int i=y;i>=x;i--)
int main( )
{
   int t;
   cin>>t;
   while(t--){

 int s;
 cin>>s;
         vector<int> ans;
        in_range_back(i,1,9){
            if(s==0)break;
            if(s<i){
                ans.push_back(s);
                break;
            }
            else{
                ans.push_back(i);
                s-=i;
            }
        }
        in_range_back(i,0,ans.size()-1){
            printf("%d",ans[i]);
        }
       cout<<endl;


   }
   }