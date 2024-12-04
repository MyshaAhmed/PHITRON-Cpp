#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout<<a[n-1];

    // using max function====>
    int mx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,a[i]);
    }
    cout<<mx<<endl;
    return 0;
}