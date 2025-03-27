#include "iostream"

using namespace std;

char* weird_string() {
   char c[] = "12345";
   return c;
}

/*
Compiler warning
D:/Coding/C++/2425II_INT2215_6/main.cpp:7:11: warning: address of local variable 'c' returned [-Wreturn-local-addr]
    7 |    return c;
      |           ^
D:/Coding/C++/2425II_INT2215_6/main.cpp:6:9: note: declared here
    6 |    char c[] = "12345";
      |         ^
[2/2] Linking CXX executable 2425II_INT2215_6.exe
*/

int main()
{
    // prints nothing
    cout << weird_string();
    return 0;
}
