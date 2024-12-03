// for statc variables=====>
#include <bits/stdc++.h>
using namespace std;
int* p;
void func()
{
    int x=10;
    p=&x;
    cout<<"func()->"<<*p<<endl;// p=10
}
int main()
{
    func();
    cout<<"main()->"<<*p<<endl; //p=0  main return value is 0 function deletes stack memory
    return 0;
}
// for dynamic variables====>
#include <bits/stdc++.h>
using namespace std;
int* p;
void func()
{
    int* x=new int;
    *x=10;
    p=x;
    cout<<"func()->"<<*p<<endl; //p=10
}
int main()
{
    func();
    cout<<"main()->"<<*p<<endl; //p=10
    return 0;
}

// usually we dont need to declare dynamic variables in fuction call because we can access values in this way===>
#include <bits/stdc++.h>
using namespace std;
int* p;
int func2()
{
    int x=10;
    p=&x;
    cout<<"func()->"<<*p<<endl; //p=10
    return x;
}
int main()
{
    int y=func2();
    cout<<"main()->"<<*p<<endl; //p=10
    return 0;
}
