#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[100];
int v[100];
void DFS(int n)
{
     v[n]=1;
     for(int i=0;i<adj_list[n].size();i++){
         int vis=adj_list[n][i];
          if(v[vis]==0) DFS(vis);
     }

}

int main(){
     int node,edge;

     cin>>node>>edge;
  for(int i=0;i<100;i++){
    v[i]=0;
  }
     

     while(edge--){
        int n,m;
        cin>>n>>m;
        adj_list[n].push_back(m);
        adj_list[m].push_back(n);
     }
      
      DFS(1);
  
   

}