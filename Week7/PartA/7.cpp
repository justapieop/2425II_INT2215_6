#include "iostream"
#include "string"
#include "cstring"

using namespace std;

string s1, s2, k;
int c = 0;

int main(int argc, const char *argv[])
{
    if (argc < 3)
    {
        return 0;
    }

    s1 = argv[1];
    s2 = argv[2];

    if (s1.size() > s2.size())
    {
        cout << 0;
        return 0;
    }

    for (int i = 0; i <= s2.size() - s1.size(); i++)
    {
        k = s2.substr(i, s1.size());
        if (strcmp(s1.c_str(), k.c_str()) == 0)
        {
            ++c;
            ++i;
        }
    }
    cout << c;
    return 0;
}
