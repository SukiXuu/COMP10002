#include <stdio.h> 
#include <stdlib.h>



int main(int argc, char *argv[]) {

   int a = 4;
   int *pa = &a;
   char c = 'e';
   char *pc = &c;
   printf("%d\n", a);
   printf("%p\n", pa);
   printf("%p\n", pc);
  printf("%d\n", *pc);
  printf("%d\n", c);
   printf("%p\n", pa += *pc);


/*
    int A[] = {1,2,2,4};
    printf("%d\n", *A);
    printf("%p\n", A);
    printf("%p\n", A+1);
    printf("%d\n\n", *(A+1));
    char c = 'a';
    int i=4;
    double d = 3.444, j =0.888;
    double *pd = &d;
    int *pi = &i;
    char *pc = &c;
    

    printf("%p\n", &d);
    printf("%p\n", pd);
    printf("%p\n\n", &pd);

    printf("%p\n\n", &j);

    printf("%p\n", &i);
    printf("%p\n", pi);
    printf("%p\n\n", &pi);

    printf("%p\n", &c);
    printf("%p\n", pc);
    printf("%p\n", &pc);

    printf("%lu\n", sizeof(&pc));
    printf("%lu\n", sizeof(pd));
    printf("%lu\n", sizeof(&i));

    int I[3], aaa=333, bbb=0;
    char C[3], ccc='a', ddd='4';
    double D[3], eee=1.333, fff = 2.0; 
    printf("%lu\n", sizeof(aaa));
    printf("%lu\n", sizeof(&aaa));

    printf("%lu\n", sizeof(bbb));
    printf("%lu\n", sizeof(&bbb));

    printf("%lu\n", sizeof(ccc));
    printf("%lu\n", sizeof(&ccc));

    printf("%lu\n", sizeof(ddd));
    printf("%lu\n", sizeof(&ddd));

    printf("%lu\n", sizeof(eee));
    printf("%lu\n", sizeof(&eee));

    printf("%lu\n", sizeof(fff));
    printf("%lu\n", sizeof(&fff));

     int int_variable = 0x12345678;
     unsigned char *char_p=(unsigned char *)&int_variable;
     
      *将int的变量int_variable强制类型转换为unsigned char，这样
      *就可以使用下标运算符“[]”的形式打印出int型变量int_variable
      
      printf("%x\n",char_p[0]); //以十六进制的形式打印出变量值
      printf("%x\n",char_p[1]);
      printf("%x\n",char_p[2]);
      printf("%x\n",char_p[3]);

     system("pause");
     return 0;
     //降序所以是小端 Little-edian
} 

*/

/*
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

int main(int argc, char *argv[]) {
    int A[] = {1,2,3,1,4,2,1,3,4,2,3,4,5,6,7,8};
    
    printf("A[0]的地址--%p\n", A);
    printf("A[1]的地址--%p\n", A+1);
    printf("A[2]的地址--%p\n", A+2);
    printf("A[3]的地址--%p\n", A+3);
    printf("A[4]的地址--%p\n", A+4);
    printf("A[5]的地址--%p\n", A+5);
    printf("A[6]的地址--%p\n", A+6);
    printf("A[7]的地址--%p\n", A+7);
    printf("A[8]的地址--%p\n", A+8);
    printf("A[9]的地址--%p\n", A+9);
    printf("A[10]的地址--%p\n", A+10); 
    char B[] = {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'};
    printf("B[0]的地址--%p\n", B);
    printf("B[1]的地址--%p\n", B+1);
    printf("B[2]的地址--%p\n", B+2);
    printf("B[3]的地址--%p\n", B+3);
    printf("B[4]的地址--%p\n", B+4);
    printf("B[5]的地址--%p\n", B+5);
    printf("B[6]的地址--%p\n", B+6);
    printf("B[7]的地址--%p\n", B+7);
    printf("B[8]的地址--%p\n", B+8);
    printf("B[9]的地址--%p\n", B+9);
    printf("B[10]的地址--%p\n", B+10);
    printf("B[11]的地址--%p\n", B+11);
    printf("B[12]的地址--%p\n", B+12);
    printf("B[13]的地址--%p\n", B+13);
    printf("B[14]的地址--%p\n", B+14);
    printf("B[15]的地址--%p\n", B+15);
    printf("B[16]的地址--%p\n", B+16);
    printf("B[17]的地址--%p\n", B+17);
    return 0; 
    */
}