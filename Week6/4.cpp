#include "iostream"
#include "vector"
#include "cstdlib"
#include "ctime"

using namespace std;

string s, k, t;
int remain = 10;
char c;
vector<string> a;

int main()
{
    srand(time(0));
    while (cin >> s)
    {
        if (s == ".") break;
        a.push_back(s);
    }
    s = a[rand() % a.size()];
    k = s;
    t.resize(s.size());
    do
    {
        if (remain == 0)
        {
            cout << "No tries left. You're lost" << '\n';
            return 0;
        }
        cin >> c;

        if (s.find(c, 0) == s.npos)
        {
            --remain;
            cout << "Wrong!\n";
        }
        else
        {
            unsigned long long i = s.find(c, 0);
            while(i != s.npos)
            {
                s[i] = ' ';
                t[i] = c;
                i = s.find(c, i + 1);
            }
        }
        cout << "Remaining tries: " << remain << '\n';
        cout << "Guess: " << t << '\n';
    } while (t != k);
    cout << "You've won";
    return 0;
}
