# include <stdio.h>
int
main( int argc, char*argv[]){
    int in,out;
    printf("Enter numbers: ");
    while (scanf("%d",&in)==1)
    {
        printf("%d |",in);
        for (out=0; out<in; out++){
            printf("*");
        }
        printf("\n");
        continue;
    }
    return 0;
}