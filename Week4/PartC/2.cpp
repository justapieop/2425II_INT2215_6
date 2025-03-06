//
// Created by JustAPie on 06/03/2025.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s, t;

int main()
{
    cin >> s;
    t = s;
    reverse(t.begin(), t.end());
    cout << (s == t ? "Yes" : "No");
    return 0;
}