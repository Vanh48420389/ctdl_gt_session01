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
    printf("mang vua nhap la:");
    for (int i=0; i < arrayLength; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int maxCount = 0;
    int mostFrequent = arr[0];

    for (int i=0; i < arrayLength; i++)
    {
        int count = 1;
        for (int j=i+1; j < arrayLength; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    printf("phan tu xuat hien nhieu nhat la : %d  xuat hien %d lan",mostFrequent,maxCount);

    return 0;
}

// Độ phức tạp của thuật toán là O(n^2) vì có 2 vòng lặp lồng nhau .