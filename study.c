#include <stdio.h>
#include "src/uploadFile.h"
#include <assert.h>

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


// ----------------------------------------指针函数划点-------------------------------------------------------
// 对 void(*)(int) 函数指针类型重命名为pfun_t
typedef void (*pfun_t) (int) ;

pfun_t signal(int, pfun_t);

// void (* signal(int , void (*) (int))) (int);


//函数指针  示例
// int (*p_sum)(int, int) = sum;
// 函数指针声明
void (*f) (int);


void (* signal(int, void(*)(int)))(int);



// ----------------------------------------end-------------------------------------------------------



void bubble_sort(int arr[], int len)
{
    int i = 0;
    //确定冒泡排序 要几趟
    for (i = 0; i < len - 1; i++)
    {
        // 每一趟的排序方式
        int j = 0;
        // 第一 趟  9 - 1 -0 = 8
        for (j = 0; j < len - 1 - i; j++)
        {
            // 比较第一个数与第二个数
            if (arr[j] > arr[j + 1])
            {
                // 第一个数大，存临时变量
                int temp = arr[j];
                // 第二个数小 放到第第一位
                arr[j] = arr[j + 1];
                // 较大的数 往后移
                arr[j + 1] = temp;
            }
        }
    }
}

struct study
{
    char name[23];
    int age;
    int sex;
};

int *adds()
{
    int num = 10;
    int *p = &num;
    return p;
}

// int my_strlen(char * arr)
// {
//     int count = 0;
//     while (*arr != '\0')
//     {
//         count ++;
//         arr++;
//     }
//     return count;
// }

// 指针相减， 实现统计字符个数
int my_strlen(char *arr)
{
    //起始地址位置
    char *start = arr;
    while (*arr != '\0')
    {
        // 地址加加
        arr++;
    }
    return arr - start;
}

// void my_strcpy(char *desc, char *src)
// {
//     // \0停止复制，所以在循环外 再赋值一次
//     while (*desc != '\0')
//     {
//         *src = *desc;
//         desc++;
//         src++;
//     }
//     //最后一个 \0也复制过去
//     *src = *desc;

// }

char *my_strcpy(char *desc, const char *src)
{

    // 每次循环 desc ， 复制的目标 都会改变； 再将地址赋给 returnAfter 返回；
    char *returnAfter = desc;
    // c 语言中， \0 ASCII 为0 ， FALSE t退出循环
    // 同时  地址先向前加， 再解引用赋值
    // *src == 0 ; false， 退出循环
    while (*desc++ = *src++)
    {
        ;
    }
    return returnAfter;
}

int judgeSmallAndBig()
{
    int prot = 1;
    char *s_b = (char *)&prot;
    return *s_b;
}

// 传递的是 int (*p_arr)[5] 一组数组的 个数
void print1(int (*p_arr)[5], int r, int c)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            // 1. *(p_arr+i)  ： 找到 第一组数组， 解引用
            // 2.  *(*(p_arr+i)+j)  每一组数组里的 每个索引值 ，取出来
            printf("%d", *(*(p_arr + i) + j));

            // printf("%d", p_arr[i][j]);
        }
        // 整形溢出
        // int i = 18318535620;
        printf("\n");
    }
}

// int arr[5];   整型数组
// int *parr1[10];  整型 指针数组 ： 里面存放这 10个， int* 类型的数组
// int (*parr2)[10];   数组指针，该指针能够指向一个数组，数组十个元素， 每个元素为int 类型
// int (*parr3[10])[5];  数组指针的数组，  能够存放十个数组指针，
//                       每个数组指针能够指向一个数组， 数组5个元素， 每个元素是int 类型

// int arr[ int * 的指针 10] [5]

void mytest(int **p)
{
    printf("test request paremeter");
}

int sum(int n, int n1)
{
    return n + n1;
}


// 查找数组最大值
int calc(int arr[], int len)
{
    //  先拿出数组第一个值
    int max = arr[0];
    int i = 0;
    for (i = 0; i < len; i++)
    {
        //循环比较
        // 1 2
        // 小于max 则继续循环取值， 大于则赋值给max
        //  继续循环 上面的步骤， 直到循环结束， 找到最大值
       if (max < arr[i])
       {
        //取出
          max = arr[i];
       }
       
    }
    return max;
}


int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int ride(int num1, int num2)
{
    return num1 * num2;
}

int expect(int num1, int num2)
{
    return num1 / num2;
}

void menu()
{
    printf("----请选择需要计算的方式----");
    printf("1.加法     2.减法");
    printf("3.乘法     4.除法");
    printf("0.退出程序");
    printf("输入错误,请重新输入！");
    printf("---------------------------");
}

int main()
{
    // int input = 0;
    // menu();

    scanf("请输入两个数值>");

    // do
    // {
    //     /* code */
    // } while ();
    

    int arrss[5];
    //整形数组
    int (*p1)[5] = &arrss;
    
    // 整形 "指针的数组", 存放着指针, int类型的指针
    int *arr12[5];
    int* (*p2)[5] = &arr12;
    
    //函数指针数组 的指针
    // 解析： 
    // 1.函数指针(*p3)(int, int)
    // 2.数组 (*p3)[5]
    // 3.的指针 (* (*p3)[5])
    int (*(*p3)[5])(int, int) = &p2;





    // int arr[] = {5, 65, 9, 7, 12, 95};
    // int arr_size = sizeof(arr) / sizeof(arr[0]);
    // int max = calc(arr, arr_size);
    // printf("max value is : %d", max);



    //------------------------------------------------函数指针----------------------------------------------
    // int (*p_sum)(int, int) = sum;

    // int sum1 = (*p_sum)(9 , 11);
    // int sum2 = p_sum(22, 34);
    // printf("%d\n", sum2);

    // int a = 11;
    // int *p_a = &a;
    // int **ppa = &p_a;
    // //传递的是 一级指针变量的地址。并非是 原始 a 的地址
    // mytest(&p_a);


    // void (*) ()        函数指针类型
    // (void (*)())0      对0 进行强制类型装换，被解释为一个函数地址
    // *(void (*)()) 0    对0 地址进行解引用操作
    // (*(void(*)())0)()  调用0地址处的函数
    (*(void (*)())0)();

    int (*pfun)(int, int) = sub;
    //函数指针数组
    int (*pfun1[2])(int, int) = {add, sub};
    

    return 0;
}

// int main()
// {
//     int arr[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 0}, {8, 2, 8, 7, 8}};

//     print1(arr, 3, 5);

//     test(arr);

//     int arrsp[] = {5, 3, 22, 88, 45, 87, 12, 44};
//     int size = sizeof(arrsp) / sizeof(arrsp[0]);
//     int * p1 = arrsp;
//     int i = 0;
//     // 数组地址指针 + 9 - 1 ， 得到最后一个元素地址
//     int *pend = arrsp + size - 1;
//     // 第一个地址 小于最后一个地址， 循环截止
//     while ( p1 <= pend)
//     {
//         printf("%d ", *p1);
//         p1++;
//     }
    

//     // int arrs[] = {1, 3, 4, 5, 6 ,7, 8, 80, 77, 9};
//     // int *parr = arrs;
//     // int size = sizeof(arrs) / sizeof(arrs[0]);
//     // int i = 0;
//     // for ( i = 0; i < size; i++)
//     // {
//     //     printf("%d ", *(parr + i));
//     // }
    
// }

// int main()
// {

//     // char desc[] = "hello";
//     // char src[] = "xxxxxxxxxxx";
//     // printf("%s \n", my_strcpy(src, desc));

//     // int count = my_strlen("abcd");
//     // printf("strlen= %d\n", count);

//     // struct study s = {"张三", 13, 1};
//     // struct study * stu = &s;
//     // printf("%s", stu->name);

//     // printf("%s\n", s.name);
//     // printf("%d\n", s.age);
//     // printf("%d\n", s.sex);
//     // upfile();

//     // int i = 1;
//     // printf("%d\n", g_val);

//     // int arr[3][4] = {1, 2, 3 ,4 ,5, 6, 7 ,8, 9,10, 11, 12 };

//     // int arr1[3][4] = {{12, 21}, {64, 99}, {74, 8}};

//     // //取数组的第一行 第一列的地址
//     // // 取出的 二维数组的第一个地址， 再循环解引用
//     // int *p = &arr1[0][0];

//     // for (int i = 0; i < 12; i++)
//     // {
//     //     printf("%d\n", *p);
//     //     printf("%p\n", p);
//     //     // 地址上移
//     //     p++;
//     // }

//     //数组作为形参传入
//     // int arrs[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//     // int len = sizeof(arrs) / sizeof(arrs[0]);
//     // bubble_sort(arrs, len);

//     // int a = 3;
//     // int b = 2;
//     // a = a + b;
//     // b = a - b;
//     // a = a - b;

//     // printf("a = %d b = %d \n", a , b);

//     // char ar[15] = "托尔斯泰";
//     // printf("%s", ar);
//     // int arr[10] = { 0 };
//     // int * p = arr;
//     // int i = 0;
//     // for ( i = 0; i < 10; i++)
//     // {
//     //     *(p + i) = 1;
//     // }

//     // int arr[10] = {0};
//     // int i ;
//     // int *p = arr;
//     // for (i = 0; i <= 10; i++)
//     // {
//     //     *p = i;
//     //     // printf("arr[%d]=%d \n", i, arr[i]);

//     //     p++;
//     // }

//     // int hypothesis = 32;
//     // int *aClass = &hypothesis;
//     // int ** const p = &aClass;
//     // int tager = 99;
//     // // **p
//     // printf("%d\n", p);
//     // printf("%p\n", p);

//     //判断编译器对数值存储方式： 大端还是小端模式
//     // 小端则是倒序： 1000 0000
//     // 大端则是：0000 0001
//     // int big_small = 1;
//     // char * flag = (char *)&big_small;

//     // int flag = judgeSmallAndBig();
//     // if (flag == 1)
//     // {
//     //     printf("samll");
//     // }
//     // else
//     // {
//     //     printf("big");
//     // }

//     // char a1 = -1;
//     // signed char a2  = -1;
//     // unsigned char a3 = -1;
//     // printf("%d\n %d\n %d\n", a1, a2, a3);

//     // // long double ii = 11.23;

//     // char na = 128;
//     // printf("%u\n", na);
//     // return 0;

//     // char * str = "test";
//     // *str = "test1";
//     // printf("123 \n");
//     // printf("%s \n", str);

//     // int arr[5] = {0};
//     // // int 类型的 (*parr), 不是int * 类型
//     // int (*parr)[5] = &arr;

//     // double *d_arr[6];
//     // double * (*pd_arr)[6] = &d_arr;

//     // int *p_arr[5];

// }