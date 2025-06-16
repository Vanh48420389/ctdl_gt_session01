//
// Created by Lenovo on 16/06/2025.
//
#include <stdio.h>

int main()
{
    int n;
    printf("Nhap vao gia tri n :");
    scanf("%d", &n);
    int sum = 0;
    for (int i=1; i < n; i++)
    {
        sum +=i;
    }
    printf("%d\n", sum);
}

// vì các biến đều là hằng số lên độ phức tạp về không gian là O(1).

