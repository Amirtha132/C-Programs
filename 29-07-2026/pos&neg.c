/*Write a program that rearranges an array so that all negative numbers appear
before positive numbers without using an additional array, using pointers. */


#include <stdio.h>
void rearrange(int *arr, int n)
{
    int *left = arr;
    int *right = arr + n - 1;
    while (left < right)
    {
        while (*left < 0 && left < right)
            left++;
        while (*right >= 0 && left < right)
            right--;
        if (left < right)
        {
            int temp = *left;
            *left = *right;
            *right = temp;
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    rearrange(arr, n);
    printf("Array after rearranging:\n");
    for (int *p = arr; p < arr + n; p++)
        printf("%d ", *p);
    return 0;
}
