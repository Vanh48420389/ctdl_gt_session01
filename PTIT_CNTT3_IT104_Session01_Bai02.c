//
// Created by Lenovo on 16/06/2025.
//
#include <stdio.h>

int main(){
    void printDouble(int n);
    int i = 1;
    int n;
    printf("nhap gia tri cho phan tu n:");
    scanf("%d",&n);
    while (i < n) {
        printf("%d\n", i);
        i *= 2;
    }

    return 0;
}
// vòng lặp while chạy cho đến khi i >= n. mỗi lần lặp thì i lớn gấp đôi . ví dụ lặp k lần thì i = 2^k . suy ra 2^k >= n
// log cả 2 vế ta đc k >= log(n). Vậy độ phức tạp về thời gian của đoạn code này là O(log(n)).