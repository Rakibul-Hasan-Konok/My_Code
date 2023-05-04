#include<bits/stdc++.h>
using namespace std;
int main(){
  
    vector<int> v;
 
    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );
    v.pop_back();
 
    v[1] = 3;
 
    cout << v.size() << endl; /// 3
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " "; /// 1 3 3
    cout << endl;
 
    vector <int> v1 = { 2, 3, 4 };

 
    v.clear();
    cout << v.size() << endl; /// 0
    cout << v.empty() << endl; /// 1
    cout << v1.empty() << endl; /// 0
 
    v1.resize(5);
    
 
    vector<int> a(5);
    vector<int> a1(5,2);//2 2 2 2 2 
 
    a = v1; //copy one vector to another vector
 
    for ( int u : a ) cout << u << " "; // define data type as int
    cout << endl;
    for ( auto u : a ) cout << u << " "; // data type automatic detected korbe
    cout << endl;
 
    vector<int>::iterator it;
    for ( it = a.begin(); it != a.end(); it++ ) cout << *it << " "; 
    cout << endl;
 
    int arr[]={1,2,3,4,5};
    sort(arr,arr+5); //array shorting 
    
    vector<int> ar={1,2,3,4,5};
    sort(ar.begin(),ar.end()); // vector shorting
 
    a = { 3, 4, 5, 1, 2 };
    sort ( a.begin(), a.begin()+3); // 0-3 index porjonto short
    sort ( a.rbegin(), a.rend() ); // reverse short
    sort ( a.begin(), a.end(), greater<int>() ); // boro theke choto short
 
    
    reverse( a.begin(), a.end() ); //vector array reverse
 
    for ( auto u : a ) cout << u << " "; /// 2 1 5 4 3
    cout << endl;
 
    cout << a.back() << endl; /// 3 last element print korar jonno
    a.pop_back(); /// O(1) complexity.
    cout << a.back() << endl; /// 4
 
 
    //cout << *a.begin() << endl; // a.begin() holo pointer so pointer er value print korar jonno (*)
 
    a.erase( a.begin() ); /// O(n) complexity. ponter delete
    for ( auto u : a ) cout << u << " "; /// 4 5 1 2
    cout << endl;
 
    a.erase( a.begin()+2 );
    for ( auto u : a ) cout << u << " "; /// 4 5 2
    cout << endl;
 
    a = { 1, 1, 2, 2, 2, 3, 3 };
    unique( a.begin(), a.end() );// unique korar age short korte hobe
 
    for ( auto u : a ) cout << u << " "; /// 1 2 3 2 2 3 3
    cout << endl;
 
 
    a = { 1, 1, 2, 2, 2, 3};
    int n = unique( a.begin(), a.end() ) - a.begin();
 
    cout << n << endl; /// 3
    for ( int i = 0; i < n; i++ ) cout << a[i] << " "; /// 1 2 3
    cout << endl;
 
    a = { 2, 3, 1, 5 };
    cout << max_element( a.begin(), a.end() ) - a.begin() << endl; /// 3
    cout << *max_element( a.begin(), a.end() ) << endl; /// 5
 
    return 0;



}

   
 
