#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Array reverse:---------->"<<endl;
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    reverse(a,a+n);
    for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<" ";
    }
    cout<<endl;

    cout << "String reverse:---------->"<<endl;
    string s="Hello";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

        return 0;
}