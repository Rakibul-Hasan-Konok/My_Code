#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node,edge;
    cin>>node>>edge;

    vector<int> Adj_list[node];

    while(edge--){
        int n,m;
        cin>>n>>m;
        Adj_list[n].push_back(m);
        Adj_list[m].push_back(n);
    }

    for(int i=1;i<=node;i++){
        cout<<i<<" -> ";
        for(int j=1;j<Adj_list[i].size();j++){
            cout<<Adj_list[i][j]<<" ";    
        }
        cout<<endl;
    }





}
