#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int k = 0, arr[n], product = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            product = sqrt(arr[i]);
            if ((product * product) != arr[i])
                k++;
        }
        if (k != 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}