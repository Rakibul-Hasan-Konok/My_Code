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
    int arr[Size],key,num,i;
    cout<<"Enter The Number Of Elements: ";
    cin>>num;
    cout<<"Enter "<<num<<" Elements: ";
     for(i=0;i<num;i++) cin>>arr[i];
    cout<<"Enter The Value to be searched: ";
    cin>>key;
   
    int index= linearSearch(arr,num, key);
   if (index == -1)
		cout << "Search is Unsucessful\n";
	else
		cout <<key<<" Element is found at location "<<index+1;

    return 0;
}