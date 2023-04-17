#include<bits/stdc++.h>
using namespace std;
int main(){

map<int,int> mp;
mp.insert({1,20});
mp.insert({2,30});
mp.insert({3,40});
mp.insert({4,50});
mp.insert({5,60});
cout<<mp[1]<<endl;
cout<<mp.at(2)<<endl;
for(auto it:mp) cout<<it.second<<endl;
cout<<mp.size()<<endl;


}