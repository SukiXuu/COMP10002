# array

Author: SukiXuu Subject: COMP10002 Time: 2020-09-08, 2020 Semester

## array 的长度

* sizeof\(\) 函数

  input 是你的array的名称

  返回的是所占的字符数也就是有关你的array类型

所以对于array长度

```c
int main(int argc, char const *argv[])
{
    int a[4] = {1,2,3,4}, b , c ;
    b = sizeof(a);
    c = sizeof(a)/sizeof(a[0]);
    printf("%d \n", b);
    printf("%d", c);
    return 0;
}
```

![&#x622A;&#x5C4F;2020-09-08 &#x4E0B;&#x5348;8.22.11](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/Users/suki/Documents/GitHub/uni_suki/git-personal_info/Photos/截屏2020-09-08%20下午8.22.11.png)

19/08/20

## print Arrary

可以看出数列必须要用loop才可以打印出所有array的数值

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

![avator](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/Note/截屏2020-08-19%20下午6.08.51.png)

