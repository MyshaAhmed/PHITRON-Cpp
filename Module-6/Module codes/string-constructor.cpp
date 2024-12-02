#include <bits/stdc++.h>
using namespace std;
int main()
{
    // stirng declaration:
    //First way--------->
    cout << "// 1st way--------->";
    string s = "hello";
    cout << s << endl;

    // 2nd way--------->
    cout << "// 2nd way--------->";
    string s2("Hello World");
    cout<<s2<<endl;

    // 3rd way--------->
    cout << "// 3rd way--------->";
    string s3("Hello World",4);
    cout<<s3<<endl;

    // 4th way--------->
    cout << "// 4th way--------->";
    string s4(s, 4);
    cout<<s4<<endl;

    // 5th way--------->
    cout << "// 5th way--------->";
    string s5(5,'A');
    cout<<s5<<endl;
     return 0;
}