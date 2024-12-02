#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello world!";
    // s.size()---->
    cout << "========== s.size()==========>" << endl;
    cout<<s.size()<<endl;

    // s.max_size()---->
    cout << "========== s.max_size()==========>" << endl;
    cout<<s.max_size()<<endl; // Compiler capacity

    // s.capacity()---->
    cout << "========== s.capacity()==========>" << endl;
    cout<<s.capacity()<<endl;

    // s.clear()---->
    cout << "========== s.clear()==========>" << endl;
    s.clear();
    cout<<s<<endl; // string is cleared, nothing will show 
    cout<<s.size()<<endl;

    // empty()-----> function checks whether the string is empty or not
    cout << "========== s.empty()==========>" << endl;
    if(s.empty()==true)
    {
        cout<<"Empty"<<endl;
    }
    else 
    {
        cout<<"not Empty"<<endl;
    }

    // empty() function use na koreo size()==0 kina eta diye check kora jay
    s = "hello world!";
    if (s.size() == 0)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    cout << "========== s.resize()==========>" << endl;
    // s.resize()---->
    s.resize(15);
    cout<<s<<endl;

    s.resize(15,'x');
    cout<<s<<endl;

    s.resize(5);
    cout<<s<<endl;

    return 0;
}