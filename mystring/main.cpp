#include <iostream>
#include <String>
using namespace std;

int main()
{
    string str1("Hello");
    string str2 = "World!";

    string s;
    s = str1 + str2;

    cout << "the string " << s << endl;
    cout << "Length of string = " << s.length() << endl;
    cout << "first character: " << s[0] << endl;

    int lasPos = s.length() - 1;

    cout << "last character: " << s[lasPos] << endl;

    return 0;
};