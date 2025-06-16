//
// Created by Lenovo on 16/06/2025.
//
#include <stdio.h>

int main()
{
    int arr[100] ;
    int arrayLength;
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

    int n;
    printf("nhap so muon dem :");
    scanf("%d", &n);

    int count =0;
    for (int i=1; i < arrayLength; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }
    printf("so lan xuat hien cua phan tu %d la %d",n,count);
    return 0;
}

// mỗi lần duyệt qua mảng ta chỉ duyệt 1 lần lên độ phức tạp của thuật toán là O(n).(tuyến tính)