#include <stdio.h>
#include <stdlib.h>

#define N 9
#define P 5
#define Q 3

int main()
{
    // count to count assigning to work
    int count = 0;

    int W[N] = {0, 6, 10, 15, 20, 25, 30, 35, 40};
    int E[P] = {1, 2, 3, 4, 5};
    int S[Q] = {30, 35, 40};

    int E_curr = 0;
    int S_curr = 0;

    // loop through W
    for (int i = 0; i < N; i++)
    {
        // find match condition in E
        for (int j = E_curr; j < P; j++)
        {
            if (W[i] > E[E_curr])
            {
                E_curr++;
            }
            else if (W[i] <= E[E_curr])
            {
                count++;
                printf("now count is %d\n", count);
                printf("after count %d\n", W[i]);
                E_curr++;
                break;
            }
        }
        if (W[i] >= S[S_curr])
        {
            count++;
            printf("now count is %d\n", count);
            printf("after count %d\n", W[i]);
            S_curr++;
        }
        }

    printf("\n");
    printf("count is %d\n", count);

    return 0;
}