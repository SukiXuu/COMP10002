#include <stdio.h>
# include <stdlib.h>

int intpower(int x1, int x2);

int main(){
    printf("function print %d \n ", intpower(3, 4) );
    return 0;
}

int intpower(int x1, int x2){
int i, pow=1;
if (x2<=0){
    printf("Cannot <=0");
        exit(EXIT_FAlLURE);
}
for (i=0; i<x2;i++){
pow = pow * x1;
}
return pow;
}