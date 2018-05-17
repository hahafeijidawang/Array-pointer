#include <iostream>
#include"stdio.h"

using namespace std;

int main()
{
    int a[10];//a代表的是数组首元素的地址，&a代表整个数组的地址 a+1 4 &a+1 步长40

    //定义一个数组类型
    {
    typedef int (myTypeArray)[10];//1.myTypeArray[10]

    myTypeArray myArray;//2.

    myArray[0] = 10;

    printf("%d\n",myArray[0]);

    }

    {
        //定义一个指针数组类型

        typedef int (*PTypeArray)[10];//int *p

        PTypeArray myPArray;//sizeof(int)*10

        myPArray = &a;

       // int b = 10;

        //int *p = NULL;

        //p = &b;

        (*myPArray)[0] =20;

        printf("a[0]:%d\n",a[0]);
    }

    {

        //定义一个指向 数组类型的指针 数组类的指针。

        int (*MyPointer)[10];//相当于1、2 告诉c编译器给我分配内存。

        MyPointer = &a;


        (*MyPointer)[0] = 40;

        printf("a[0]: %d\n",a[0]);

    }


    return 0;
}

