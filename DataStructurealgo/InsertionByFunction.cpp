#include <bits/stdc++.h>
using namespace std;
int arr[20];

void search(int arr[], int n,int item,int position)
{
    while((position)<=n)
	{
        arr[n]=arr[n-1];
        n--;
    }
    arr[position-1]=item;
    
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
    
   search(arr,n,item,position);
	
    for(i=0;i<n+1;i++) cout<<arr[i]<<" ";

    

	return 0;
}
