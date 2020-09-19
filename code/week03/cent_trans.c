#include <stdio.h> 
#include <stdlib.h>

void print_change(int cents);
int round_to_5(int cents);
int try_one_coin(int *cents, int coin[6]);

int main(int argc, char *argv[]) {
    int cent, coin[6] = {200,100,50 ,20 ,10, 5}, nextCoin = 0;
    printf("Enter amount in cents: ");
    scanf("%d",&cent);
    cent = round_to_5(cent);
    do{
        nextCoin = try_one_coin(&cent,  coin);
        printf("give %d", cent/nextCoin);
        print_change(nextCoin);
        cent = cent - (cent/nextCoin)*nextCoin;
    } while (cent != 0);
    
    return 0;
}

int round_to_5(int a){
    int b;
    if (a % 5 == 0){
        return a;
    }
    else{
        b = a / 5;
        if (a % 5 >=2.5)
            return 5 * (b + 1);
        else{
            return 5 * b; 
        }
    }
}
int try_one_coin(int *cents, int coin[6]){
    int i = -1, a = 0;
    do{
        i ++;
        a = *cents / coin[i];
    } while (a == 0);
    return coin[i] ;
}
void print_change(int cents){
    printf("%4d-cent coins\n", cents);
}