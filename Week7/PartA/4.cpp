#include "iostream"
#include <cstddef>

using namespace std;

int binarySeach(int *a, int l, int r, int x)
{
    int m = l + (l + r) / 2;
    while (l <= r)
    {
        if (*(a + m) == x) return m;
        if (*(a + m) < x) return binarySeach(a, l, m - 1, x);
        return binarySeach(a, m + 1, r, x);
    }

    return -1;
}

int n, *a = nullptr, k;

int main()
{
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    cout << binarySeach(a, 0, n - 1, k);
    return 0;
}
