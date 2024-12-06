#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={10,65,3,6,25,56,78,34,2,76,7};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"sorting array in ascending order---------->"<<endl;
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nsorting array in descending order---------->"<<endl;
    sort(a,a+n,greater<int>());
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}