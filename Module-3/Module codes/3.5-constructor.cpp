#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double gpa;
    Student(char n[100],int r,double g)
    {
        strcpy(name,n);
        roll = r;
        gpa = g;
    }
};
int main()
{
    // taking input
    Student a("Mysha",166,3.70);
    cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    return 0;
}