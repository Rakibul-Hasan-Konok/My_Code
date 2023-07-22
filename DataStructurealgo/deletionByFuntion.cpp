#include <bits/stdc++.h>
using namespace std;
int arr[20];

void search(int arr[], int n,int position)
{
    position--;
    while((position)<n)
	{
        arr[position]=arr[position+1];
        position++;
    }
   
    
}
int main()
{
	int item,position,n,i;
    cout<<"Enter The nber Of Elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements: ";
     for(i=0;i<n;i++) cin>>arr[i];
    cout<<"enter the element with position u wanna delete: ";
    cin>>item>>position;
    
   search(arr,n,position);
	
    for(i=0;i<n-1;i++) cout<<arr[i]<<" ";

    

	return 0;
}
