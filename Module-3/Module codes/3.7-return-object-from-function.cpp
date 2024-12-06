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
Student func()
{
    Student obj("Mysha",166,3.70);
    return obj;
}
int main()
{
    // taking input
    Student a=func();
    cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    return 0;
}