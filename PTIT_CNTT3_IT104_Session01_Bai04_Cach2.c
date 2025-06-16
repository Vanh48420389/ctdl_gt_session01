//
// Created by Lenovo on 16/06/2025.
//
#include <stdio.h>

int main()
{
    int n;
    printf("Nhap vao gia tri n :");
    scanf("%d", &n);
    int sum = n * (n + 1) / 2;
    printf("%d", sum);
    return 0;
}