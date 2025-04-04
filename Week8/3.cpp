#include "iostream"

using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    // dòng này gây ra lỗi do khi giải phòng c thì nó giải phóng từ a + 3 đến hết, tức là xâu này chưa có kỳ tự kết thúc nên hệ thống sẽ ngắt chương trình do chương trình gây lỗi bộ nhớ
    cerr << "a after deleting c:" << "-" << a << "-" << endl;

    return 0;
}
