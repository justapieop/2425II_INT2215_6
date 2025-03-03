//
// Created by JustAPie on 03/03/2025.
//
#include <iostream>

using namespace std;

// Khai báo không có lỗi
int a[] = {};
// Khai báo mảng ngoài main() với n > 4
int c[5] = {1, 2, 3, 4};
// Khai báo mảng ngoài main() với n < 4
// Lỗi dịch
// int d[2] = {1, 2, 3, 4};

// Khai báo ngoài main() dạng int a[] = {1, 2, 3, 4}
int k[] = {1, 2, 3, 4};

int main()
{
    // Khai báo không có lỗi
    int b[] = {};
    // Khai báo mảng trong main() với n > 4
    int e[5] = {1, 2, 3, 4};
    // Khai báo mảng trong main() với n < 4
    // Lỗi dịch
    // int f[2] = {1, 2, 3, 4};
    // Khai báo trong main() dạng int a[] = {1, 2, 3, 4}
    int t[] = {1, 2, 3, 4};

    // Chạy nhiều lần sẽ cho ra nhiều giá trị ngẫu nhiên khác nhau
    for (int i = 0; i < 10; i++) cout << b[i] << ' ';
    return 0;
}