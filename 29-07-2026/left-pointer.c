/*Write a function that rotates an array to the left by K positions using only pointer arithmetic.
 The program should work for any value of K, even when K > size of the array. */


#include <stdio.h>
void reverse(int *start,int *end)
{
    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
void leftRotate(int *arr, int n, int k)
{
    k = k % n;
    reverse(arr, arr + k - 1);
    reverse(arr + k, arr + n - 1);
    reverse(arr, arr + n - 1);
}
int main()
{
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of K: ");
    scanf("%d", &k);
    leftRotate(arr, n, k);
    printf("Array after left rotation:\n");
    for (int *p = arr; p < arr + n; p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return 0;
}
