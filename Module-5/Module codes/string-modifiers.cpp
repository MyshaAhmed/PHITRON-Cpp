#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello ";
    string s2="world";

    //  s.append()-------->
    cout << "========== s.append()==========>" << endl;
    s +=s2;
    cout<<s<<endl;
    s2="hi";
    s.append(s2);
    cout<<s<<endl;

    //  s.push_back()-------->
    cout << "========== s.push_back()==========>" << endl;
    s.push_back('A');
    //s +="A";
    //s.append('A');
    cout<<s<<endl;
    s.push_back('b');

    //  s.pop_back()-------->
    cout << "========== s.pop_back()==========>" << endl;
    s.pop_back();
    cout<<s<<endl;

    // assignment--->
    cout << "========assignment=======>" << endl;
    s="hello";
    s2="hi";
    s=s2;
    cout<<s<<endl;
    s="gello";
    cout << s << endl;

    s.assign(s2);
    cout << s << endl;
    s.assign("gello");
    cout << s << endl;

    // s.erase()-------->
    cout << "========== s.erase()==========>" << endl;
    s="hello world";
    s.erase(5);
    cout<<s<<endl;

    s = "hello world";
    s.resize(5);
    cout << s << endl;

    s = "hello world";
    s.erase(5,2);
    cout << s << endl;

    // s.erase()-------->
    cout << "========== s.replace()==========>" << endl;
    s = "hello world";
    s.replace(6,5,"Bangladesh");
    cout << s << endl;

    s = "hello world";
    s.replace(6, 0, "Bangladesh ");
    cout << s << endl;

    s = "hello world";
    s.erase(5, 2);
    cout << s << endl;

    // s.insert()-------->
    cout << "========== s.insert()==========>" << endl;
    s = "hello world";
    s.insert(5, " Bangladesh");
    cout << s << endl;

    s = "hello world";
    s.replace(6, 0,"Bangladesh ");
    cout << s << endl;

    return 0;
}