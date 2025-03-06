//
// Created by JustAPie on 06/03/2025.
//
#include <iostream>
#include <vector>

using namespace std;

int m, n, c = 1, x = 0, y = 0;
char ch = 'r';
vector<vector<int>> a;

int main()
{
    cin >> m >> n;
    a.resize(m);
    for (int i = 0; i < m; i++) a[i] = vector(n, 0);
    a[0][0] = 1;

    while (c < m * n)
    {
        if (ch == 'r')
        {
            ++y;
            if (y == n || a[x][y] != 0)
            {
                --y;
                ch = 'd';
                continue;
            }

        }
        else if (ch == 'd')
        {
            ++x;
            if (x == m || a[x][y] != 0)
            {
                --x;
                ch = 'l';
                continue;
            }
        }
        else if (ch == 'l')
        {
            --y;
            if (y == -1 || a[x][y] != 0)
            {
                ++y;
                ch = 'u';
                continue;
            }
        }
        else if (ch == 'u')
        {
            --x;
            if (x == -1 || a[x][y] != 0)
            {
                ++x;
                ch = 'r';
                continue;
            }
        }
        ++c;
        a[x][y] = c;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) cout << a[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}