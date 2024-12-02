#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int p = s.find("EGYPT");
    while (p != -1)
    {
        s.replace(p, 5, " ");
        p = s.find("EGYPT");
    }

    cout << s << endl;

    return 0;
}