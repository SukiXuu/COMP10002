# include <stdio.h>



int main(int argc, char const *argv[])
{
    int a[4] = {1,2,3,4}, b , c ;
    b = sizeof(a);
    c = sizeof(a)/sizeof(a[0]);
    printf("%d \n", b);
    printf("%d", c);
    return 0;
}
