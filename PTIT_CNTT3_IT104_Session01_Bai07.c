//
// Created by Lenovo on 16/06/2025.
//
#include <stdio.h>

int main()
{
    int arr[100] ;
    int arrayLength;
    int n=0;
    printf("nhap vao so phan tu cua mang :");
    scanf("%d", &arrayLength);
    for (int i=0; i < arrayLength; i++)
    {
        printf("nhap vao phan tu thu %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0; i < arrayLength; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i=0; i < arrayLength-1; i++)
    {
        for (int j =i+1; j < arrayLength; j++)
        {
            if (arr[i] == arr[j])
            {
                n=1;
                break;
            }
        }
    }
    if (n)
    {
        printf("mang co phan tu trung nhau");
    }else
    {
        printf("mang khong co phan tu trung nhau");
    }
}

// vì ta duyệt các phần tử của mảng 2 lần lên độ phức tạp của thuật toán là O(n^2).