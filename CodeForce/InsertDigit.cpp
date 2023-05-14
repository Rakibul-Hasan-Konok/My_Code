#include <bits/stdc++.h>
using namespace std;
#define N	200000
int main(){
   int t;                  
   cin>>t;
   while(t--){
    // int n,b,k=0;
    // cin>>n>>b;
    // string s;
    // cin>>s;
    
    // string s1[n+1];
    // for(int i=0;i<n+1;i++){

    // if(s[i]<=b && k==0) {
    // s1[i]=to_string(b);
    // i++;
    // k++;
    // }
    // s1[i]=s[i];
         
    // }
    // cout<<s1<<endl;
      char cc[N + 2];
		int n, d, i, j;
		scanf("%d%d%s", &n, &d, cc);
		for (i = 0; i < n; i++)
			if (d > cc[i] - '0')
				break;
		for (j = n; j > i; j--)
			cc[j] = cc[j - 1];
		cc[i] = d + '0';
		cc[n + 1] = 0;
		printf("%s\n", cc);

   }
}