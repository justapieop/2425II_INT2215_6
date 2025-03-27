#include "iostream"
#include "string"

using namespace std;

int gcd(int a, int b)
{
    if (b == 0) return a;
    int t;
    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int stringToInt(string s)
{
    int r = 0;
    for (int i = 0; i < s.size(); i++)
    {
        r = r * 10 + (s[0] - '0');
    }
    return r;
}

int a, b;

int main(int argc, const char *argv[])
{
    if (argc < 2)
    {
        return 0;
    }

    a = stringToInt(argv[0]);
    b = stringToInt(argv[1]);

    cout << gcd(a, b);
    return 0;
}
