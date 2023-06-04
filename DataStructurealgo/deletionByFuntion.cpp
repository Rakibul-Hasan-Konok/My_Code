#include <bits/stdc++.h>
using namespace std;
int arr[20];

void search(int arr[], int num,int position)
{
    position--;
    while((position)<num)
	{
        arr[position]=arr[position+1];
        position++;
    }
   
    
}
int main()
{
	int item,position,num,i;
    cout<<"Enter The Number Of Elements: ";
    cin>>num;
    cout<<"Enter "<<num<<" Elements: ";
     for(i=0;i<num;i++) cin>>arr[i];
    cout<<"enter the element with position u wanna delete: ";
    cin>>item>>position;
    
   search(arr,num,position);
	
    for(i=0;i<num-1;i++) cout<<arr[i]<<" ";

    

	return 0;
}
