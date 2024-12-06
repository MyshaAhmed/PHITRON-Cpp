#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    double gpa;
    Student(char name[100],int roll,double gpa)
    {
        this->name=name;
        this->roll=roll;
        this->gpa=gpa;
    }
};
int main()
{
    // taking input
    Student a("Mysha",166,3.70);
    cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    return 0;
}