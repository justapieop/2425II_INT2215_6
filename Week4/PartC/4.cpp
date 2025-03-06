//
// Created by JustAPie on 06/03/2025.
//
#include <iostream>

using namespace std;

int m, n, c = 0;
char **a;

int main()
{
    cin >> m >> n;
    a = new char*[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = new char[n];
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == '*') continue;
            if (j - 1 >= 0 && a[i][j - 1] == '*') ++c;
            if (j + 1 < n && a[i][j + 1] == '*') ++c;
            if (i - 1 >= 0 && a[i - 1][j] == '*') ++c;
            if (i + 1 < m && a[i + 1][j] == '*') ++c;
            if (i - 1 >= 0 && j - 1 >= 0 && a[i - 1][j - 1] == '*') ++c;
            if (i - 1 >= 0 && j + 1 < n && a[i - 1][j + 1] == '*') ++c;
            if (i + 1 < m && j - 1 >= 0 && a[i + 1][j - 1] == '*') ++c;
            if (i + 1 < m && j + 1 < n && a[i + 1][j + 1] == '*') ++c;
            a[i][j] = c + '0';
            c = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) cout << a[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}