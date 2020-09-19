# array

 19/08/20

## Array

可以看出数列必须要用loop才可以读取

```c
# include <stdio.h>
int
main(int argc, char* argv[]){
    int ar[5] = {0}, ele=0;
    while (ele < 5){
        printf("ar[%d]= %d\n", ele, ar[ele]);
        ele ++;
    }
    return 0;
}
```

![avator](../../../.gitbook/assets/截屏2020-08-19%20下午6.08.51.png)

