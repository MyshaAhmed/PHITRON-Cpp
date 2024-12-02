#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

// ========================================================
bool cmp(Student l, Student r)
{
    // return condition;
    return l.marks<r.marks;
}
// ========================================================
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
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << a[i].roll << a[i].marks;
    }

    return 0;
}