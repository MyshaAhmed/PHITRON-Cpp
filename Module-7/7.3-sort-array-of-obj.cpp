#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student l,Student r)
{
    // sorting in ascending order---->
    if (l.marks<r.marks)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
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
    // Custom compare function====>
    cout << "// Custom compare function====>"<<endl;
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name <<" "<< a[i].roll<<" " << a[i].marks<<endl;
    }

    return 0;
}