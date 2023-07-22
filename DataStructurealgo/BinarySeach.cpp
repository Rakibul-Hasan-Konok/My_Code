#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,i;
    int low,high,mid;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){    
        cin>>arr[i];
    }
    int item;
    cin>>item;
    sort(arr,arr+n);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high && (arr[mid]!=item)){
        if(item<arr[mid]) high=mid-1;
        else if(item>arr[mid]) low=mid+1;

        mid=(low+high)/2;
    }
if(item==arr[mid]){
    cout<<"Successfully Find the Item\n";
    cout<<"Mid Value is:"<<mid+1<<"\n"<<"Value is: "<<arr[mid];
}
else{
    cout<<"The item is not present\n";
}

}