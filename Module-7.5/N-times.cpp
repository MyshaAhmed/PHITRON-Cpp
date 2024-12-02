#include <bits/stdc++.h>
using namespace std;
void n_times(int n,char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
    }
    cout<<"\n";
}
int main()
{
    int t,n;
    char c;
    cin>>t;
    while (t--) 
    {
        cin>>n>>c;
        n_times(n,c);
        
    }
    
    return 0;
}