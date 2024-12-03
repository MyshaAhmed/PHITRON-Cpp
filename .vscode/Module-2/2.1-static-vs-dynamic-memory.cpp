#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=10;
    int* p=new int;
    *p=100;
    cout<<x<<endl;
    cout<<*p<<endl;
    delete p;
    cout<<x<<endl;
    cout<<*p<<endl; // will give an error as memory is deleted
    return 0;
}