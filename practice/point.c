#include <stdio.h>
#include <stdlib.h>
void func1(int *p1,int *p2);
int x; //global variable


int main(int argc, char* argv[]){  // char**  argv
    int a = 1, b=2;
    point 1
    int *p1 = &a, *p2=&b;
    func1(p1,p2);
    printf("a = %d, b = %d \n", a, b); 
    return 0;
}

void 
func1(int *p1,int *p2){
    *p1 = *p1+1;
    *p2 = *p2+1;
}