#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//int main()
//{
////    int *p=NULL;//指向整形的指针
////    char *pc=NULL;//指向字符的指针
////    //数组指针-指向数组的指针-存放数组的地址
////    int arr[10]={0};
////    //arr-首元素地址
////    //&arr[0];
////    //&arr-数组的地址
//    int arr[10]={1,2,6};
//    int(*p)[10]=&arr;//数组的地址存起来
//    printf("%d\n",p[][0]);
//    return 0;
//}
//int main()
//{
//    char* arr[5];
//    char*(*pa)[5]=&arr;
//    int arr2[10]={0};
//    int (*pa2)[10]=&arr2;
//    return 0;
//}
//int main()
//{
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int (*p)[10]=&arr;
//    int i=0;
//
////    for(i=0;i<10;i++)
////    {
////        printf("%d ",*(*p+i));
////    }
////    for(i=0;i<10;i++)
////    {
////        printf("%d ",(*p)[i]);
////    }
//    return 0;
//
//}
//参数是数组的形式
void printf1(int arr[3][5],int x,int y)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
//参数是指针的形式
//void printf2(int(*p)[5],int x,int y)
//{
//    int i,j;
//    for(i=0;i<x;i++)
//    {
//        for(j=0;j<y;j++)
//        {
//            printf("%d ",(*(p+i))[j]);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int arr[3][5]={{1,2,3,5,4},{3,5,4,8,6},{1,4,8,1,1}};
//    int (*p)[3][5]=&arr;
//    printf2(arr,3,5);
//    printf1(arr,3,5);
//    return 0;
//}
//int main()
//{
//    int arr1[5]={0};
//    int arr2[5]={0};
//    int arr3[5]={0};
//    int *arr[3]={arr1,arr2,arr3};
//    return 0;
//}
//int main()
//{
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int i=0;
//    int *p=arr;
//    for(i=0;i<10;i++)
//    {
//        printf("%d ",*(p+i));
//        printf("%d ",arr[i]);
//        printf("%d ",p[i]);
//    }
//    return 0;
//}
//int main()
//{
//    //字符指针
//    char ch ='W';
//    char*p=&ch;
//    const char *p2="abcdef";//字符串常量
//    //指针数组
//    char* pc[5];
//    int* ps[5];
//    //数组指针
//    int(*p1)[5];
//    return 0;
//}
//void test(int arr[3][5])
//{
//
//}
//void test1(int(*p)[3][5])
//{
//
//}
//void test3(int(*p)[5])
//{
//
//}
//int main()
//{
//    int arr[3][5]={0};
//    test(arr);//二维数组传参
//    test1(&arr);//二位数组地址
//    test3(arr);
//    test4(arr);
//    return 0;
//}
//int main()
//{
//    int a=10;
//    int *p=&a;
//    int **pp=&p;
//    printf("%p %p",p,pp);
//    return 0;
//}
//int main()
//{
//    int a=10;
//    int b=20;
//    int *x[2]={&a,&b};
//    printf("%p %p %p",x,x[0],x[1]);
//    return 0;
//}
//函数指针-指向函数的指针
//int Add(int a,int b)
//{
//    int z=a+b;
//    return z;
//}
//int main()
//{
//    int a=10;
//    int b=20;
//    int z=Add(a,b);
//    int(*pa)(int,int)=Add;
//    printf("%d\n",pa(2,3));
//    printf("%d\n",z);
//    printf("%p\n",&Add);
//    printf("%p\n",Add);
//    printf("%p\n",pa);
//    return 0;
//}
//int main()
//{
//    int a[]={1,2,4,5};
//    int *p=a;
//    printf("%p\n",p);
//    printf("%p\n",&p);
//    return 0;
//}
//void Print(char*str)
//{
//    printf("%s\n",str);
//}
//int main()
//{
//    void (*p)(char*)=Print;
//    Print("hello bit");
//    printf("%p\n",p);
//    return 0;
//}
