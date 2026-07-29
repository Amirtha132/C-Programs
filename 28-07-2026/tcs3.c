#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1000], str2[1000];
    int i, j, k, count = 0, found;

    scanf("%s", str1);
    scanf("%s", str2);

    for(i = 0; str2[i] != '\0'; i++)
    {
        found = 0;


        for(j = 0; j < i; j++)
        {
            if(str2[i] == str2[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            for(k = 0; str1[k] != '\0'; k++)
            {
                if(str1[k] == str2[i])
                    count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
