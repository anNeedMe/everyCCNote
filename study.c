#include <stdio.h>
#include "src/uploadFile.h"

// int main()
// {

//     int arr[3] = {2, 4, 6};
//     // 数组元素个数， sizeof 数组 [计算数组总大小] 除以 sizeof(数组类型)
//     // printf("%d", sizeof arr/ sizeof(int));

//     int num = 1;
//     int sum = (++num) + (++num) + (++num);
//     printf("%d\n", sum);

//     return 0; 
// }

extern int g_val;

int main()
{
    // upfile();

    // int i = 1;
    // printf("%d\n", g_val);

    int arr[3][4] = {1, 2, 3 ,4 ,5, 6, 7 ,8, 9,10, 11, 12 };

    int arr1[3][4] = {{12, 21}, {64, 99}, {74, 8}};

    //取数组的第一行 第一列的地址
    // 取出的 二维数组的第一个地址， 再循环解引用
    int *p = &arr1[0][0];

    for (int i = 0; i < 12; i++)
    {
        printf("%d\n", *p);
        printf("%p\n", p);
        // 地址上移
        p++;
    }
    


    return 0;
}