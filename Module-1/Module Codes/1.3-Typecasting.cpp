#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int to char conversion:
    int y=65;
    cout<<(char)y<<endl; // Output: A
    int x=y+32;
    cout<<(char)x<<endl; // Output: a
    int z=y-32;
    cout<<(char)z<<endl; // Output: Z


    // char to int conversion:
    char ch='A';
    cout<<(int)ch<<endl; // Output: 65
    int w=ch+32;
    cout<<(int)w<<endl; // Output: 97

    return 0;
}