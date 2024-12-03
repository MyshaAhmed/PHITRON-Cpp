#include <bits/stdc++.h>
using namespace std;
// static array return---->
int* func()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int* a = func();
    for (int i = 0; i < 5; i++)
    {
        cout<< a[i]<<" "; // will give segmentation fault as we are trying to access invalid memory
    }
     
    return 0;
}
// dynamic array return---->
int* func()
{
    int* a=new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int* a = func();
    for (int i = 0; i < 5; i++)
    {
        cout<< a[i]<<" "; // will give correct value of array
    }
     
    return 0;
}