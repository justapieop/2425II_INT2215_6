//
// Created by JustAPie on 06/03/2025.
//
#include <iostream>

using namespace std;

char s[10];

int main()
{
    for (int i = 0; i < 12; i++) cin >> s[i];
    cout << '_';
    for (int i = 0; i < 12; i++) cout << s[i];
    cout << '_';
    return 0;
}