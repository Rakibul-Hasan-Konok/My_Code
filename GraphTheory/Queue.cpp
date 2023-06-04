#include<bits/stdc++.h>
using namespace std;
void QUEUE(queue<int> qu){
    queue<int> tmp=qu;
    while(!tmp.empty()){
        cout<<tmp.front()<<" ";
        tmp.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> qe,que;
    qe.push(1);
    qe.push(4);
    qe.push(6);
    qe.push(7);
    QUEUE(qe);

   que.push(2);
   que.push(4);
    que.push(6);
   que.push(9);
   QUEUE(que);

   qe.swap(que);
   cout<<"After Swapping qe: ";
   QUEUE(qe);
   cout<<"After Swapping Que: ";
   QUEUE(que);

    

}