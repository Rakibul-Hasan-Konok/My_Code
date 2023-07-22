#include <bits/stdc++.h>
using namespace std;
int arr[20];

int search(int arr[], int n,int position)
{
    if(position==n) return 0;
    else{
        arr[position-1]=arr[position];
    }

    return search(arr,n,position+1);
    
   
    
}
int main()
{
	int item,position,n,i;
    cout<<"Enter The nber Of Elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements: ";
     for(i=0;i<n;i++) cin>>arr[i];
    cout<<"enter the element with position u wanna insert: ";
    cin>>item>>position;
    
   search(arr,n,position);
	
    for(i=0;i<n-1;i++) cout<<arr[i]<<" ";

    

	return 0;
}
