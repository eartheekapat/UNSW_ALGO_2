#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// algo to find k (skipped number)
// in consecutive sequence of natural number

#define N 4
#define INDEX pow(2, N)

int main()
{
    // 15 missing n = 4
    int arr[16 - 1] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};

    int i = 1;
    int count = 0;
    int n = 4;
    int ans;

    while (i < INDEX - 1)
    {
        if (arr[i] - 1 != arr[i - 1])
        {
            ans = arr[i - 1] + 1;
        }
        else if (arr[i] + 1 != arr[i + 1])
        {
            ans = arr[i + 1] - 1;
        }
        i += 2;
    }

    printf("%d\n", ans);

    return 0;
}