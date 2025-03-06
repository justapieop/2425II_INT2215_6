//
// Created by JustAPie on 06/03/2025.
//
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

bool check_palin(const int n)
{
    string t1;
    stringstream ss;
    ss << n;
    ss >> t1;
    string t2 = t1;
    reverse(t2.begin(), t2.end());
    return t1 == t2;
}

int t, a, b, c = 0;

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        for (int j = a; j <= b; ++j)
        {
            if (check_palin(j)) ++c;
        }
        cout << c << '\n';
        c = 0;
    }
    return 0;
}