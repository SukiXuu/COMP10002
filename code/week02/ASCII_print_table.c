// comment ASCII 字符表
#include <stdio.h>
int main(int argc, char *argv[]){
    char asc; int i;
    printf("           +0  +1  +2  +3  +4  +5  +6  +7");
    printf("\n        +--------------------------------");
    for ( i = 32; i < 127; i ++ ){
        asc = i;
        
        if (i == 32){
            printf("\n     32 |    ");
            continue;
        }
        
        if ((i-32) % 8 != 0){
            printf("   %c", asc);
        }        
        else {
            if (asc>100){
                printf("\n    %d |   %c", i, asc);
            }
            else {
                printf("\n     %d |   %c", i, asc);}
        }
    }
    printf("\n");
    return 0;
}
