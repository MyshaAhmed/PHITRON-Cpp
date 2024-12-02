#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    // declare an obj as array
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    // min marks----->
    cout << "// min marks----->" << endl;
    int mn = MAX_INT;
    for (int i = 0; i < n; i++)
    {
        mn = min(a[i].marks, mn);
    }
    cout << mn << endl;

    cout << "If we want to get all the information of a student with min marks======>\n we have to declare an object====>" << endl;
    Student mini;
    mini.marks = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < mini.marks)
        {
            mini = a[i];
        }
    }
    cout << mini.name << " " << mini.roll << " " << mini.marks << endl;

    return 0;
}