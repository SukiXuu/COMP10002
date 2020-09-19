# include <stdio.h>
# define NL '\n'
# define SP ' '
int main (int argc, char* argv[]){
    int line=0, word=0, c,chairs=0;
    printf("Enter text:\n");
    while ((c = getchar()) != EOF){
        if (c==NL){
            line++;
            word++;
        }
        else if(c == SP){
            word ++;
        }
        chairs ++;
    }
    // for (line=0; (c=getchar())!=EOF; line++){
    printf("Lines:%7d\n", line);
    printf("Words:%7d\n", word);
    printf("Chars:%7d\n", chairs);
    return 0;
}