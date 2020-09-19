// 为什么需要指针
#include <stdio.h>
#include <stdlib.h>
int func1(int a);
int main(int argc, char *argv[]){
    int a = 5;
    int *p = &a; //这里定义的是p，但是p的类型是location
    return 0;
}


int func1(int a){

}
