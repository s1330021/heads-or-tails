#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int heads = 0, tails = 0;
    int results[3];

    srand(time(NULL));

    printf("Tossing a coin...\n");
    for (int i = 0; i < 3; i++)
    {
        results[i] = rand() % 2;
        if (results[i] == 0)
        {
            printf("Round %d: Heads\n", i + 1);
            heads++;
        }
        else
        {
            printf("Round %d: Tails\n", i + 1);
            tails++;
        }
    }
    printf("Heads: %d, Tails: %d\n", heads, tails);

    return 0;
}