//
// Created by Lenovo on 16/06/2025.
//
#include <stdio.h>

int main()
{
    int arr[] = {3,7,1,0,9,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i < n-1; i++)
    {
        for (int j =0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }


    }
    for (int i=0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

// vì sử dụng 2 vòng lặp lên độ phức tạp của thuật toán là O(n^2).