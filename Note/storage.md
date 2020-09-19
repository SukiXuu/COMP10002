# storage

Author: SukiXuu Subject: COMP10002 Time: 2020-09-10, 2020 Semester

## 变量

c与中有3中作用域

* 全局变量

  在函数外声明的变量为全局变量，全局变量在任何地方都是可见的。

* 文件内部的静态变量

  关键字：static ，声明为static（静态）的变量其作用域只限定于在当前的源代码文件中，对外面的其他源代码文件是不可见的。

* 局部变量

  在函数内或者是函数中声明的变量为局部变量，局部变量只能在声明它的语句块中被应用，外面的文件是不能引用的。

## 存储器

* 静态存储器\(static storage duration\)

  静态变量包括：全局变量、文件内的static变量、指定static的局部变量。

* 自动存储器

  没有指定static的局部变量，

在c中对变量进行操作，其实就是间接地对内存进行操作，这是因为变量的本质：也就是内存，变量就相当于一个门牌号（变量具有两面性）。总结出：c中有3种内存区域的寿命。 1.静态变量 寿命：从程序运行开始，到程序运行结束 2.自动变量 寿命：从声明该_语句块_到该_语句块_结束 3.使用malloc\(\)分配的内存区域 寿命：到free\(\)为止。

知道了变量在内存中的作用域和生命周期以后，再来看这些变量在内存中是如何被分配的。通过以下代码来作说明，该代码中包含了以上作业域和生命周期的变量。

```c
#include<stdio.h>
#include<stdlib.h>

int global_variable;
static int st_file_variable;

void func1(void){
   int func1_variable;
   static int func1_static_variable;
   printf("&func1_variable:%p\n",&func1_variable);
   printf("&func1_static_variable:%p\n",&func1_static_variable);
}

void func2(void){
   int func2_variable;
   printf("&func2_variable:%p\n",&func2_variable);
}

int main(int argc,char *argv[]){
    int *int_p;//定义指向int的指针变量int_p,用来动态malloc申请内存

    printf("&func1:%p\n",&func1); //输出函数func1的首地址
    printf("&func2:%p\n",&func2); //输出函数func2的首地址
    printf("&string_numbers:%p\n","abcdefg");//输出字符串常量地址
    printf("&global_variable:%p\n",&global_variable); //全局变量
   printf("&st_file_variable:%p\n",&st_file_variable);
   //输出静态变量
   func1();//输出函数func1中的局部变量
   func2();//输出函数func2中的局部变量func2_variable

   int_p=(int *)malloc(sizeof(int));
   //通过malloc动态申请内存,内存的首地址返回给int_p指针
   printf("malloc_address:%p\n",int_p);//输出内存地址
   system("pause");
   return 0;
}
```

通过该表中的变量的地址可分析： 1.两个函数的地址（指向函数的指针）和字符串常量被分配在非常靠近的位置； 2.静态文件变量和函数内的静态变量、以及全局变量被分配在非常靠近的位置； 3.malloc\(\)分配的内存地址空间，和自动变量的地址距离得非常远； 4.而两个函数中的自动变量的地址完全一样。

