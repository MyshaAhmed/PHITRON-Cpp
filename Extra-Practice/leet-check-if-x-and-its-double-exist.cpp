
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<arr.size();i++)
    {
            cin>>arr[i];
    }
    int flag=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]== 2 * arr[j] || arr[j]== 2 * arr[i])
                {
                    return true;
                }

            }
        }
    return false;
    return 0;
}
        
