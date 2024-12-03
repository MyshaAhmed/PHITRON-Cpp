#include <bits/stdc++.h>
using namespace std;
int main()
{
    // static array-------->
    // int a[5];
    // dynamic array==========>
    int* a = new int[5];
    // all other operations(cin,cout) of array is same as static array
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}