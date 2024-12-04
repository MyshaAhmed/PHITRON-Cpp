#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Dynamic memory allocation for array
    int* a=new int[3];
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    int* b=new int[5];
    for(int i=0; i<5; i++)
    {
        b[i]=a[i];
    }
    b[3]=40;
    b[4]=50;
    delete[] a; // delete array a 
    for(int i=0; i<5; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // static memory allocation for array
    int a[3];
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    int b[5];
    for(int i=0; i<5; i++)
    {
        b[i]=a[i];
    }
    b[3]=40;
    b[4]=50;  
    // cant delete array a 
    for(int i=0; i<5; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}

