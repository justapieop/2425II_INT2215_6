#include "iostream"

using namespace std;

int *p = nullptr;

void add(int a)
{
    int k = 2 + a;
    p = &k;
}

int main()
{
    add(2);
    cerr << "Before deleting p: " << *p << '\n';
    delete p;
    cerr << "After deleting p: " << *p;
    /*
    Khi xoá p thì nó đã vô tình xoá phải vùng nhớ được giải phóng nên gây ra lỗi vi phạm truy cập bộ nhớ (Memory Access Violation)
    */
    return 0;
}
