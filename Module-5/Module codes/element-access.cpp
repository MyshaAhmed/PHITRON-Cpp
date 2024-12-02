#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello";

    //  index-------->
    cout << "==========index access: s[i] , s.at()==========>" << endl;
    cout<<s[0]<<endl;
    cout<<s[4]<<endl;
    cout<<s.at(0)<<endl;

    //  s.front()-------->
    cout << "========== s.front()==========>" << endl;
    cout<<s.front()<<endl;
    cout<<s[0]<<endl;

    cout << "\n";
    //  s.back()-------->
    cout << "========== s.back()==========>" << endl;
    cout<<s.back()<<endl;
    cout<<s[s.size()-1]<<endl;

    return 0;
}