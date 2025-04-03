#include <bits/stdc++.h>
using namespace std;
#include <iomanip> // for set precision
int main()
{
    // set precision:---> how many digits will be printed after the decimal point
    double d=24.1243215189;
    cout<<fixed<<setprecision(2)<<d<<endl;  // output: 24.12
    cout<<fixed<<setprecision(5)<<d<<endl;  // output: 24.12432
    cout<<fixed<<setprecision(10)<<d<<endl; // output: 24.1243215189
    cout<<fixed<<setprecision(20)<<d<<endl; // output: 24.12432151890000000000

    // EOF:
    int x;
    while(cin>>x)
    {
        cout<<"x: "<<x<<endl;
    }

    
    return 0;
}