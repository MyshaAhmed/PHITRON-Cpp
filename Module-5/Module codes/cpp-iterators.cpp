#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello";
    // index iterate
    cout << "============index iterate=============>"<<endl;
    for (int i = 0; i< s.size(); i++)
    {
        cout<<s[i]<<endl;
    }

    cout << "============Iterators-->pointers=============>"<<endl;
    cout << "============ s.begin()=============>"<<endl;
    cout << *s.begin() << endl;
    cout << "============ s.end()=============>"<<endl;
    cout << *s.end() << endl;
    cout << *(s.end()-1) << endl;

    cout << "============Iterators loop=============>" << endl;
    for(string:: iterator it=s.begin();it<s.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<"\n";
    for(auto it=s.begin();it<s.end();it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}