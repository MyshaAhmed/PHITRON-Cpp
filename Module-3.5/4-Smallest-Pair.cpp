#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int count[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                count[j-1]=a[i]+a[j]+j-i;
                cout<<count[j-1]<<" ";
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<count[i]<<" ";
        }
        sort(count,count+n);
        cout<<"\ncount array-----> "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<count[i]<<" ";
        }
        cout<<count[0]<<endl;
           
    }
    return 0;
}