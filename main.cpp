#include <iostream>
#include <string>

using namespace std;

int countZeros(const string& s)
{
    if (s.size() == 1)
    {
        if (s == "1") return 0;
        if (s == "0") return 1;
    }
    return (s[0] == '0') + countZeros(s.substr(1, s.size() - 1));
}

int findMaxDigit(const int a[], const int n)
{
    if (n == 1) return a[0];
    return max(a[n - 1], findMaxDigit(a, n - 1));
}

long sumDigits(const int a[], const int n)
{
    if (n == 1) return a[0];
    return a[n - 1] + sumDigits(a, n - 1);
}

string rvString(const string& s)
{
    if (s.empty()) return "";
    if (s.size() == 1) return s;
    return s[s.size() - 1] + rvString(s.substr(0, s.size() - 1));
}

long int s = 0;

const int a[] = {1, 2, 3, 6, 5, 0, 10, 2};

int main()
{
    cout << rvString("abc");
    return 0;
}