#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string is char type array:
    char ch[100];  // cpp has built in string, we dont need to use char array
    cout << "Enter a string: ";
    // if input has space: or else use cin>>ch;  
    // cin>>ch;  // this will not handle spaces
    // # cin can not handle spaces

    // to handle spaces, use getline() function
    // here size_of_string should be more than length of string to handle spaces
    // here 100 is just a placeholder, it can be any size, but it's good to keep it more than length of string to handle spaces.
    
   // syntax: cin.getline(name_of_string,size_of_string);
    cin.getline(ch, 100);
    cout << "Entered string: " << ch << endl;


    // now getline does not handle a new line after an int input:
    int num;
    char ch2[100];
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Entered integer: " << num << endl;
    // to handle new line after int input, use cin.ignore() function
    cin.ignore(); // to ignore the newline character left by cin >>
    cout << "Enter a string: ";
    cin.getline(ch2, 100);
    cout << "Entered string: " << ch2 << endl;

    return 0;
}