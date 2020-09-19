#include <stdio.h> 
#include <stdlib.h>



int main(int argc, char *argv[]) {
    int X [3] [5];
    int * Y [3];
    Y [0] = X [0];
    return 0;
}
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
    