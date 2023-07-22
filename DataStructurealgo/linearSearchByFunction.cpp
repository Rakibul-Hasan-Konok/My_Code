#include <bits/stdc++.h>
using namespace std;
int Size=20;

int search(int arr[], int key)
{
	int i;
	for (i = 0; i < Size; i++)
		if (arr[i] == key)
			return i;
	return -1;
}
int main()
{
	int arr[Size],key,n,i;
    cout<<"Enter The nber Of Elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements: ";
     for(i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter The Value to be searched: ";
    cin>>key;
    
    int index = search(arr,key);
	
    if (index == -1)
		cout << "Search is Unsucessful\n";
	else
		cout <<key<<" Element is found at location "<<index+1;

	return 0;
}
