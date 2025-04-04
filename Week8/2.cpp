#include "iostream"

using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
   *p2 = 100; // dòng này có thể sẽ lỗi do nó ghi vào vùng bộ nhớ đã được giải phóng và được trả lại cho hệ thống, có thể gây ra lỗi truy cập vùng nhớ bị cấm (Memory Access Violation)
    cout << *p2;
    delete p2;
    return 0;
}
