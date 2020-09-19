#include <stdio.h> 
#include <stdlib.h>

void QuickSort(int a[], int left, int right);
void quickSort(int A[], int left, int right);
int main(int argc, char *argv[]) {
    int A[] = {10,9,8,7,6,5,4,3,2,1}, i;
    quickSort(A, 0, 9);
    for(i=0; i <= 9; i++){
        printf("%d\n", A[i]);
    }
    return 0;
}



void QuickSort(int a[], int left, int right){

    if (left < right){
        int i = left, j = right, x = a[left];
        while (i < j){
            while(i < j && a[j] >= x) // 从右向左找第一个小于x的数
                j--;  
            if(i < j) 
                a[i++] = a[j];

            while(i < j && a[i] < x) // 从左向右找第一个大于等于x的数
                i++;  
            if(i < j) 
                a[j--] = a[i];
        }
        a[i] = x;
        QuickSort(a, left, i - 1); // 递归调用 
        QuickSort(a, i + 1, right);
    }
}

void quickSort(int A[], int left, int right){
    if (right - left > 1){
        int pivot, i = left, j = right, rec = 0;
        pivot = A[right];
        while (i <= j){
            if(A[j] <= pivot){
                rec = A[j];
                A[j] = A[i]; //{1,2,42,3,3,2,3,41,2,3,1,4},
                A[i] = rec;
                i ++;
            }
            j --;
        }
        int k;
        for(k=0; k <= 9; k++){
            printf("%d\n", A[k]);
        }
        printf("\ni = %d;j=%d; pivot = %d\n\n", i, j, pivot);
        quickSort(A, left, j);
        quickSort(A, i, right);
    }
    else{
        if (right - left == 1 && A[left] > A[right]){
            int rec = A[left];
            A[left] = A[right];
            A[right] = rec;
    }
    }
}