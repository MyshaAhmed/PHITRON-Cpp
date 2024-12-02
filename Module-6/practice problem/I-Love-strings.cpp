// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     while(n--)
//     {
//         string s,t,temp;
//         cin>>s>>t;
//         if(s.size()>t.size())
//         {
//             for (int i = 0,j=0; i < s.size(),j<t.size(); i++,j++)
//             {
//                 temp +=s[i];
//                 temp += t[j];
//             }
//         }
//         cout<<temp;
//     }
//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N; // Number of test cases
    cin >> N;

    while (N--)
    {
        string S, T;
        cin >> S >> T;

        string result = "";
        int lenS = S.length();
        int lenT = T.length();
        int minLength = min(lenS, lenT);

        // Merge letters alternately
        for (int i = 0; i < minLength; i++)
        {
            result += S[i];
            result += T[i];
        }

        // Append remaining characters manually using a loop
        for (int i = minLength; i < lenS; i++)
        {
            result += S[i];
        }
        for (int i = minLength; i < lenT; i++)
        {
            result += T[i];
        }

        cout << result << endl;
    }

    return 0;
}
