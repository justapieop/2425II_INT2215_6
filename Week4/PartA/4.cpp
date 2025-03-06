//
// Created by JustAPie on 06/03/2025.
//
#include <iostream>

using namespace std;

int n;
char read[10];
char read2[3][4];

int main()
{
    // for (int i = 0; i < n; i++) cin >> read[i];
    // for (int i = -1; i <= n; i++) cout << read[i] << ' ';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++) cin >> read2[i][j];
    }
    for (int i = 0; i < n + 2; i++)
    {
        for (int j = 0; j < n + 5; j++) cout << read2[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}