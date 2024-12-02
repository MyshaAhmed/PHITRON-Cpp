/*
Question: Make a class named Student. Write a program to take a positive integer N as input and make an Student array of size N. 
Student 
{
	name;
	roll;
	marks;
}
Your task is to sort the Students data according to the marks in descending order. If multiple students have the same marks then sort them according to the roll in ascending order as the roll will be unique.
Note: name will not contain any spaces.
*/

#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
	int roll;
	int marks;

};
bool cmp(Student l, Student r)
{
    if (l.marks==r.marks)
    {
        return l.roll<r.roll;
    }
    else
    {
        return l.marks>r.marks;
    }
    
}
int main() 
{
    int n;
    cin>>n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    
    return 0;
}