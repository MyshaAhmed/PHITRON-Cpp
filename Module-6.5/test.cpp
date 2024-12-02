#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string S;
    cin >> S;

    // Convert the string to lowercase
    transform(S.begin(), S.end(), S.begin(), ::tolower);

    // Count the frequency of the required characters
    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for (char ch : S)
    {
        if (ch == 'e')
            e++;
        else if (ch == 'g')
            g++;
        else if (ch == 'y')
            y++;
        else if (ch == 'p')
            p++;
        else if (ch == 't')
            t++;
    }

    // Calculate the number of "egypt" words that can be formed
    int result = min({e, g, y, p, t});
    cout << result << endl;

    return 0;
}
