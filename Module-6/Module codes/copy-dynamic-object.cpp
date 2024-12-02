#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    string country;
    int jersey;
    Cricketer(string country, int jersey)
    {
        this->jersey=jersey;
        this->country=country;
    }
};
int main()
{
   Cricketer* dhoni= new Cricketer("India",100);
   Cricketer* kohli= new Cricketer("India",8);
//    kohli=dhoni;
   *kohli = *dhoni;
   delete dhoni;
   cout<<kohli->jersey<<" "<<kohli->country;

    return 0;
}