//
// Created by JustAPie on 03/03/2025.
//
#include <iostream>

using namespace std;

// Khai báo không có lỗi
char a[] = {};
// Khai báo mảng ngoài main() với n > 4
char c[5] = "abcd";
// Khai báo mảng ngoài main() với n = 4
// Trả về lỗi do có bao gồm cả ký tự \0
// char r[4] = "abcd";
// Khai báo mảng ngoài main() với n < 4
// Lỗi dịch
// char d[2] = "abcd";

// Khai báo ngoài main() dạng char* a[] = "abcd"
char k[] = "abcd";

int main()
{
    // Khai báo không có lỗi
    char b[] = {};
    // Khai báo mảng trong main() với n > 4
    char e[5] = "abcd";
    // Khai báo mảng trong main() với n = 4
    char x[5] = "abcd";
    // Khai báo mảng trong main() với n < 4
    // Lỗi dịch
    // char f[2] = {1, 2, 3, 4};
    // Khai báo trong main() dạng char* a[] = {1, 2, 3, 4}
    char t[] = "abcd";

    // Tương tự bài 1, mảng khai báo trong main() sẽ được khởi tạo giá trị rác, ngoài main thì sẽ mặc định các ký tự ascii có giá trị 0
    return 0;
}