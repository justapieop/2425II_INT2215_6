//
// Created by JustAPie on 06/03/2025.
//
#include <iostream>
#include <map>
#include <string>

using namespace std;

string s;
map<char, int> m;

int main()
{
    cin >> s;
    for (char i : s)
    {
        if (!m.count(i)) m[i] = 1;
        else
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}