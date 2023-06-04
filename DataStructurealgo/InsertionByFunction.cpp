#include <bits/stdc++.h>
using namespace std;
int arr[20];

void search(int arr[], int num,int item,int position)
{
    while((position)<=num)
	{
        arr[num]=arr[num-1];
        num--;
    }
    arr[position-1]=item;
    
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
