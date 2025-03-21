#include "iostream"

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

int a, b;

int main()
{
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}
