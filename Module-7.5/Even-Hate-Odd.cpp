#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int even=0,odd=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
           if (a[i]%2==0)
           {
                even++;
           }
           else 
           {
                odd++;
           }
           
        }
        // cout<<"even"<<even<<" "<<"odd"<<odd<<endl;
        int total;
        if(even==n||odd==n)
        {
            if(even==n)
            {
                total=abs(even-(n/2));
            }
            else if(odd==n)
            {
                total=abs(odd-(n/2));
            }
            else
            {
                total=abs((n/2)-even);
            }
        }
        

        if(n%2==0)
        {
            cout<<total<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}