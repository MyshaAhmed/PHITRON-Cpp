#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student l, Student r)
{
    if((l.eng_marks+l.math_marks)==(r.eng_marks+r.math_marks))
    {
        return (l.id+l.id)<(r.id+r.id);
    }
    else
    {
        return (l.eng_marks+l.math_marks)>(r.eng_marks+r.math_marks);
    }
}
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    }

    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    
    return 0;
}

