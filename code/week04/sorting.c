#include <stdio.h> 
void insertion_sort(int array[], int l);
void swap(int *i, int *j);
void QuickSort(int array[], int small, int large);

int 
main(int argc, char *argv[]) {
    int a[6] = {1,37,2,8,6,2}, i = 0;
    QuickSort( a, 0, 5);
    while(i < 6){
        printf("%i--%d \n", i, a[i]);
        i ++;
    }
    return 0;
}


void insertion_sort(int array[], int l){
    int i, cur, j; 
    for (i = 1; i < l; i++){
        cur = array[i]; // cur 是当前的数值
        j = i - 1; // j 是当前的数值 左边的那个数的index
        while (j >= 0 && array[j] > cur){   // array[j] > cur 当左边的数大于右边时
            array[j + 1] = array[j];    // 右边位置赋左边的值
            j -- ; // 你要放进去的数的位置向左挪动了一个
            // 你想插入位置的index也-1
            // 同样你想插入位置的左边数的index也-1
            // 为了找到合适的位置插入要继续和左边的数据进行比较
        }
        array[j + 1] = cur; // 已经找到合适位置，j + 1 就是要去的位置
    }
}


void swap(int *i, int *j) {
   int t = *i;
   *i = *j;
   *j = t;
}

void QuickSort(int array[], int small, int large){ // small和large 是list的index
    int pivot, i,a=0,b=large-small, newSet[large-small+1];
    if (b<2){
        return;}
    pivot = array[large]; //取中位数
    large --;
    for(i = small; a != b; i++){
        if(array[i]<pivot){
            newSet[a] = array[i];
            a++;
        }
        else{
            newSet[b] = array[i];
            b--;
        }
    }
    newSet[a] = pivot;
    large ++;
    for(i=1; small != large; i++){
        array[small] = newSet[i];
        small++;
    }

}   // 中间数值



