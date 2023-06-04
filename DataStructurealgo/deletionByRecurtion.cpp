#include <bits/stdc++.h>
using namespace std;
int arr[20];

int search(int arr[], int num,int position)
{
    if(position==num) return 0;
    else{
        arr[position-1]=arr[position];
    }

    return search(arr,num,position+1);
    
   
    
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
    
   search(arr,num,position);
	
    for(i=0;i<num-1;i++) cout<<arr[i]<<" ";

    

	return 0;
}
