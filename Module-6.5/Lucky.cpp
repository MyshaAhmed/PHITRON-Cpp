#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum1 = 0, sum2 = 0;
        string s;
        cin>>s;
        int n=s.size();
        sum1=s[0]+s[1]+s[2];
        sum2=s[n-1]+s[n-2]+s[n-3];
        if(sum1==sum2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

        
    }
    return 0;
}