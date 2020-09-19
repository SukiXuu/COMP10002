#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *s1="goingonce", *s2="Goingtwice";
    int i = strlen(s1);
    printf("%d\n", s2[i-1]); // 可以看出 这个长度和python一样
    return 0;
    
}