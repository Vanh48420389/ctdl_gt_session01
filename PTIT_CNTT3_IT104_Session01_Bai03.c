//
// Created by Lenovo on 16/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
int* mallocArray(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}
int main()
{
    int n =10;
    int* arr = mallocArray(n);
    for (int i = 0; i < n; i++)
    {
    printf("%d\n", arr[i]);
    }
    return 0;
}

// bộ nhớ đc cấp phát có n phần tử nên độ phức tạp về không gian là O(n).các biến tăng dần