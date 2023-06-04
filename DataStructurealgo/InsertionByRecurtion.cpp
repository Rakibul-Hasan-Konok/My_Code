#include <bits/stdc++.h>
using namespace std;
int arr[20];

int search(int arr[], int num,int item,int position)
{
    arr[num]=arr[num-1];
    if(position==num){
         arr[position-1]=item;
         return 0;
    }
   
    return search(arr,num-1, item, position);
    
   
    
}
int main()
{
	int item,position,num,i;
    cout<<"Enter The Number Of Elements: ";
    cin>>num;
    cout<<"Enter "<<num<<" Elements: ";
     for(i=0;i<num;i++) cin>>arr[i];
    cout<<"enter the element with position u wanna insert: ";
    cin>>item>>position;
    
   search(arr,num,item,position);
	
    for(i=0;i<num+1;i++) cout<<arr[i]<<" ";

    

	return 0;
}
