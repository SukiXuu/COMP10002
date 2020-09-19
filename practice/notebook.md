# notebook

 18/08/20

## while语句与for语句

```c
//Exercise 4.5: Simple character 
int
main( int argc, char**argv[]){
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
```

℅ 对于这样不知道会输入多少的只能用while吧

