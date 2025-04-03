#include <bits/stdc++.h>
using namespace std;
#include <algorithm> // to use min and max
int main()
{
    int a=2,b=3;
    cout<<min(a,b)<<endl;
    cout<<max(a,b)<<endl;
    // multiple min and max values:
    int mn=min({1,7,4,2});
    int mx=max({1,7,4,2});
    
    cout<<mn<<" "<<mx<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    cout<<fmod(a,b)<<endl;
    cout<<__gcd(a,b)<<endl;
    cout<<log(a)<<endl;
    cout<<log2(a)<<endl;
    cout<<log10(a)<<endl;
    cout<<exp(a)<<endl;
    cout<<abs(a-b)<<endl;
    cout<<pow(a,b)<<endl;
    cout<<sqrt(a)<<endl;
    cout<<ceil(a/b)<<endl;
    cout<<floor(a/b)<<endl;
    cout<<round(a/b)<<endl;
    cout<<sin(a/b)<<endl;
    cout<<cos(a/b)<<endl;
    cout<<tan(a/b)<<endl;
    cout<<asin(a/b)<<endl;
    cout<<acos(a/b)<<endl;
    cout<<atan(a/b)<<endl;
    cout<<atan2(a,b)<<endl;
    cout<<hypot(a,b)<<endl;
    cout<<cbrt(a)<<endl;
    cout<<erf(a/b)<<endl;
    cout<<erfc(a/b)<<endl;
    cout<<lgamma(a+1)<<endl;
    cout<<tgamma(a+1)<<endl;
    cout<<lgamma(a+1)/log(10)<<endl;
    cout<<tgamma(a+1)/tgamma(1)<<endl;
    cout<<sinh(a/b)<<endl;
    cout<<cosh(a/b)<<endl;
    cout<<tanh(a/b)<<endl;
    cout<<asinh(a/b)<<endl;
    cout<<acosh(a/b)<<endl;
    cout<<atanh(a/b)<<endl;


    return 0;
}