// move all the zero to end
#include <stdio.h>
int main()
{
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    // moving all the elements to a new array
    int newArray[5];
    int index_for_new = 0;
    for (int a = 0; a < 5; a++)
    {
        if (num[a] != 0)
        {
            // printf("%d ", num[a]);
            newArray[index_for_new] = num[a];
            index_for_new++;
        }
    }
    for (int a = 0; a < 5; a++)
    {
        if (num[a] == 0)
        {
            // printf("%d ", num[a]);
            newArray[index_for_new] = num[a];
            index_for_new++;
        }
    }

    for (int r = 0; r < 5; r++)
    {
        printf("%d", newArray[r]);
        if (r != 4)
        {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}