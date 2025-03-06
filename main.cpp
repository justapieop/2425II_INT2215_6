#include <iostream>
#include <vector>

using namespace std;

int n, k = 1, p1, p2;
vector<vector<int>> a;

int main()
{
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        a[i].resize(n);
    }

    int x = 0, y = n / 2;

    while (k <= n * n)
    {
        if (a[x][y] != 0)
        {
            x = p1 + 1;
            if (x >= n) x = 0;
            y = p2;
        }
        a[x][y] = k;
        ++k;
        p1 = x;
        p2 = y;
        ++y;
        if (y >= n)
        {
            y = 0;
        }
        --x;
        if (x < 0) x = n - 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[n / 2][i] << ' ';
    }
    return 0;
}