#include <stdio.h>

int main() {
    int n,fact = 1,i,temp;
    //printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        temp = 0;
        for(int j = 0; j < i; j++) {
            temp += fact;
        }
        fact = temp;
    }
    printf("%d", fact);
    return 0;
}
