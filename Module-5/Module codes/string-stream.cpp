#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;

    //word by word access and print---->
    stringstream ss(s);
    string word;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    // we can use loop to do word counting 
    int count=0;
    while(ss>>word)
    {
        cout<<word<<endl;
        count++;
    }
    cout<<count<<endl;
    return 0;
}