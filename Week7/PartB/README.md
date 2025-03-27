Câu 1:
Output sẽ là:
```bash
*p3 = B, p3 = 0x5678
*p3 = A, p3 = 0x1234
*p1 = B, p1 = 0x5678
```
Câu 2:
Chỉ có lệnh `*p = 5` sẽ gán cho giá trị i = 5
Câu 3:
Kiểu dữ liệu char về bản chất là kiểu số nguyên, cho nên nếu gắn 1 con trỏ kiểu `double` sang vùng nhớ của 1 kiểu nguyên sẽ bị lỗi buffer overflow do `double` yêu cầu 1 lượng vùng nhớ lớn hơn nhiều kể cả so với kiểu số nguyên lớn nhất của C++ (Khoảng 10^308 so với 2^64)
