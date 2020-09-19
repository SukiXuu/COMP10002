#include <stdio.h>
#include <stdlib.h>

int amicablepair(int a);
int nth_pair(int num);

int main(int argc, char** argv){
    int min , b=0, i;
    printf("Enter a number n: ");
    scanf("%d",&min);
    for (i=0; b<=min; i++){
        b = nth_pair(i);
    }
    printf("%d and %d are amicable", b, amicablepair(b));
    return 0;
}






int nth_pair(int num){
    int in=1, out, i=0;
    while (i <= num){
        in ++;
        out = amicablepair(in);
        if (out != 0 && in != out){
            i ++;
            continue;}
    }
    return in;
}

int amicablepair(int a){
    int i, count_a=0, count_b=0,j=0,b=0;
    if(a>=0){
        for( i = 1; i != a ; i++){
            if (a%i == 0)
                count_a += i;
            }
        if (count_a==1)
            return j;
        b = count_a;
        for( i = 1; i !=b ; i++){
            if (b%i == 0)
                count_b += i;
            if (count_b > a){
		        return j;
            }
        }
        if (count_b == a && count_a>=a)
            return count_a;
    }
    return j;
}
