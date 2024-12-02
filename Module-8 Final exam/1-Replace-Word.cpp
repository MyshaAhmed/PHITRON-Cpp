#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s>>x;
        int x_size=x.size();
        int p = s.find(x);
        while (p != -1)
        {
            s.replace(p, x_size, "#");
            p = s.find(x);
        }

        cout << s << endl;

    }

    return 0;
}