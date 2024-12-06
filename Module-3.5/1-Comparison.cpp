#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char sign;
    cin>>a>>sign>>b;
    if(sign=='<')
    {
        if(a<b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    else if(sign=='>')
    {
        if(a>b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    else
    {
        if(a==b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    
    return 0;
}