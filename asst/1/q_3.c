#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int count = 0;
    int l_index, h_index;
    int arr[10] = {1, 4, 4, 4, 5, 5, 5, 7, 8, 9};
    int L = 3;
    int H = 6;

    // find l in arr
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] >= L)
        {
            l_index = i + 1;
            break;
        }
    }
    // find u in arr
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > H)
        {
            h_index = i + 1;
            break;
        }
    }
    count = h_index - l_index;

    printf("#element is %d\n", count);
}
