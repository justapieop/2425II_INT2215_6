#include "iostream"
#include "cstring"

using namespace std;

const char* concat(const char* a, const char* b)
{
    unsigned int n1 = strlen(a), n2 = strlen(b), n = n1 + n2;
    char* res = new char[n + 1];
    strcpy(res, a);
    strcat(res, b);
    return res;
}

int main()
{
    cout << concat("abfsfdsc", "jfsdfcba");
    return 0;
}
