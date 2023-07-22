#include <bits/stdc++.h>
using namespace std;
int Size=20;

int linearSearch(int arr[], int size, int key)
{
    if (size == 0) {
        return -1;
    }
    if (arr[size - 1] == key) {
        
        return size - 1;
    }
   
    return linearSearch(arr, size - 1, key);
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
   
    int index= linearSearch(arr,n, key);
   if (index == -1)
		cout << "Search is Unsucessful\n";
	else
		cout <<key<<" Element is found at location "<<index+1;

    return 0;
}