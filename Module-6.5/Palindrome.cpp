#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s2;
    s2=s;
    reverse(s2.begin(), s2.end()); 
    if (s == s2)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}