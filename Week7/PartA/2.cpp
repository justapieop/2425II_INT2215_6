#include "iostream"

using namespace std;

void printArr(int a[])
{
    // Prints 2
    cout << "Size of array a inside printArr(): " << sizeof(a) / sizeof(int) << '\n';
}

int a[] = {1, 2, 3};

int main()
{
    // Prints 3
    cout << "Size of array a inside main(): " << sizeof(a) / sizeof(int) << '\n';
    printArr(a);
    return 0;
}
