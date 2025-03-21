//
// Created by JustAPie on 06/03/2025.
//
#include <iostream>

using namespace std;

void fill(char **a, int x, int y, int m, int n) {
    if (a[x][y] == '*') return;
    if (x == m - 1 || y == n - 1) return;
    fill(a, x + 1, y, m, n);
    fill(a, x + 1, y + 1, m, n);
    fill(a, x, y + 1, m, n);
}

void display(int **a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) cout << a[i][j] << ' ';
        cout << '\n';
    }
}

int m, n, c = 0, x, y;
char **a, **b;

int main()
{
    cin >> m >> n;
    a = new char*[m], b = new char*[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = new char[n];
        b[i] = new char[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '*') b[i][j] = a[i][j];
        }
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

    do {
        cin >> x >> y;
        fill(a, x, y, m, n);
    } while (a[x - 1][y - 1] != '*');

    cout << "YOU'RE DEAD";
    return 0;
}
