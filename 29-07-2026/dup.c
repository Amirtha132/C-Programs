/*Write a program to remove duplicate elements from an array using pointers without creating
 another array. Display the modified array and its new size. */


#include <stdio.h>
int removeDuplicates(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; )
        {
            if (*(arr + i) == *(arr + j))
            {
                for (int k = j; k < n - 1; k++)
                    *(arr + k) = *(arr + k + 1);
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    return n;
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
    n = removeDuplicates(arr, n);
    printf("Array after removing duplicates:\n");
    for (int *p = arr; p < arr + n; p++)
        printf("%d ", *p);
    printf("\nNew size of the array = %d\n", n);
    return 0;
}
