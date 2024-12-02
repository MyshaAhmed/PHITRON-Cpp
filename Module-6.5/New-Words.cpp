#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    
    int e=0,g=0,y=0,p=0,t=0;
    for (char ch : s)   
    {
        if(ch=='e')
            e++;
        else if (ch == 'g')
        {
            g++;
        }
        else if (ch == 'y')y++;
        else if (ch == 'p')p++;
        else if (ch == 't')t++;
    }

    int result=min({e,g,y,p,t});
    cout<<result<<endl;
    
    
    return 0;
}