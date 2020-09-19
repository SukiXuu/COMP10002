#include <stdio.h> 
#include <stdlib.h>

int max_repeats(int A[], int n);

int main(int argc, char *argv[]) {
    int C[5]={1,5,2,3,4};
    int D[3][4] = {{1,12,9,2},{11,5,3,4},{7,8,6,10}};
    int A[] = {1,5,5,5};
    printf("%d\n", max_repeats(A,4));
    printf("%d", D[1][5]);
    return 0;
}

int max_repeats(int A[], int n){
    int i, j, curmax, allmax;
    for (i =1; i < n; i ++){
        curmax = 0;
        for (j = 0; j < n; j++){
            if (A[j] == A[i]){
                curmax ++;
            }
        }
        if(curmax>allmax){
            allmax = curmax;
        }
    }
    return allmax;
}
/*
//声明
void insertion_sort(int array[], int l);
// main 里面call
    int a[4]; // a 是排序的array, 4是array的长度可以改变
    *a = insertion_sort(a, 4);

void 
insertion_sort(int array[], int l){
    int i, cur, j; 
    for (i = 1; i < l; i++){
        cur = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > cur){
            array[j + 1] = array[j];
            j -- ;
        }
        array[j + 1] = cur;
    }
    return *array;
}
*/