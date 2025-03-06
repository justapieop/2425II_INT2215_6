//
// Created by JustAPie on 06/03/2025.
//
#include <iostream>
#include <vector>

using namespace std;

int n, c = 0, p1, p2;
vector<vector<int>> a;

int main()
{
    cin >> n;
    a = vector(n, vector(n, 0));

    int i = 0, j = n / 2;
    while (c < n * n)
    {
        ++c;
        a[i][j] = c;
        p1 = i;
        p2 = j;
        --i;
        if (i < 0) i = n - 1;
        ++j;
        if (j >= n) j = 0;
        if (a[i][j] != 0)
        {
            i = p1;
            j = p2;
            i++;
            if (i >= n) i = 0;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++) cout << a[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}