#include<stdio.h>

int most_common(int A[], int n)
{
    int i,j;
    int max=1, max_item=A[0], count;
    for (i=0;i<n;i++)
    {
        count = 1;
        for (j=0;j<n;j++)
        {
            if (i==j)
                continue;
            if (A[i] == A[j])
                count++;
        }
        if (count > max)
        {
            max = count;
            max_item = A[i];
        }
    }
    return max_item;
}

int max_repeats(int A[], int n)
{
    int i,j;
    int max=1, count;
    for (i=0;i<n-1;i++)
    {
        count = 1;
        for (j=0;j<n;j++)
        {
            if (i==j)
                continue;
            if (A[i] == A[j])
                count++;
        }
        if (count > max)
            max = count;
    }
    return max;
}

int num_distinct(int A[], int n) 
{ 
    int res = 1; 
    int i, j;
    
    for (i = 1; i < n; i++) 
    { 
        for (j = 0; j < i; j++) 
            if (A[i] == A[j]) 
                break; 
  
        if (i == j) 
            res++; 
    } 
    return res; 
} 


int all_different(int A[], int n)
{
    int i, j;
    for (i = 1; i < n; i++) 
    {
        for (j = 0; j < i; j++) 
        {
            if (A[i] == A[j]) 
            {
                return 0; 
            }
        }
    }
    return 1; 
}


int main(int argc, char *argv[])
{
    int A[]={3, 4, 8, 2, 6, 4};
    int n, i;
    n = sizeof(A)/sizeof(A[0]);
    printf("%d", all_different(A,6));
    return 0;
}
