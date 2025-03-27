#include "iostream"

using namespace std;

int count_even(int *a, int n)
{
    int k = 0;
    for (int i = 0; i < 5; i++)
    {
        if (*(a + i) % 2 == 0) ++k;
    }
    cout << "First 5 elements: " << k << '\n';
    k = 0;
    for (int i = n - 5; i < n; i++)
    {
        if (*(a + i) % 2 == 0) ++k;
    }
    cout << "Last 5 elements: " << k << '\n';
    return k;
}

int a[] = {2, 8, 9, 7, 10, 11, 19, 27, 30};
const int n = 9;

int main()
{
    count_even(a, n);
    return 0;
}
