//
// Created by Lenovo on 16/06/2025.
//
#include <stdio.h>

/**
 * @description  Hàm đếm số lượng phần tử
 * @param array Mảng cần lặp qua
 * @param arrayLength Độ dài của mảng
 * @param elementCheck Phần tử cần kiểm tra
 * @return
 */
int countExist(int array[], int arrayLength, int elementCheck){
    int count = 0;
    for (int i =0; i < arrayLength; i++)
    {
        if (array[i] == elementCheck)
        {
            count++;
        }
    }
    return count;
}
int main(){

    int elements;
    int elementCheck;

    // Hiện yêu cầu nhập
    printf( "Nhập số lượng phần tử của mảng: ");
    scanf( "%d", &elements );
    // Khai báo mảng
    int array[elements];

    // Lấy ra chiều dài của mảng

    // Nhập mảng
    for (int i=0; i < elements; i++)
    {
        printf("Nhập phần tử thứ %d", i);
        scanf("%d",i);
    }

    for (int i =0; i < elements; i++)
    {
        printf("%d", array[i]);
    }
    printf("Nhap phan tu can ktr:");
    scanf("%d", &elementCheck);
    int result = countExist(array, elements, elementCheck);
    printf("So lan xuat hien cua phan tu %d la %d", elementCheck ,result);
    return 0;
}

