#include "iostream"

using namespace std;

bool is_prime(int n)
{
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int n;

int main()
{
    cin >> n;
    cout << n << ' ' << (is_prime(n) ? "is a prime" : "is not a prime") << '\n';
    cout << "Prime numbers that are not greater than " << n << " are:\n";
    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i)) cout << i << ' ';
    }
    return 0;
}
