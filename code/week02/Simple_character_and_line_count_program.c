#include<stdio.h>
# include <stdlib.h>
# define NL '\n'
int main (int argc, char* argv[]){
    int line=0, word=0, c;
    printf("Enter text:\n");
    while ((c = getchar()) != EOF){
        if (c==NL){
            line ++;
        }
        word ++;
    }
    printf("Lines:%7d\n", line);
    printf("Chars:%7d\n", word);
    return 0;
}