#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    char section;
    double gpa;
};

int main()
{
    // object declaration
    Student a;
    a.roll = 100;
    a.gpa = 3.55;
    //char temp[100]="Mysh";
    //strcpy(a.name, temp);
    strcpy(a.name, "Mysh");
    
    cout << "Name: " << a.name << endl;
    cout << "Roll: " << a.roll << endl;
    cout << "GPA: " << a.gpa << endl;
    return 0;
}