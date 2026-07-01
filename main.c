#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char name[100];
    printf("Who are you?\n> ");
    scanf("%99s", name);
    printf("Hello, %s!\n", name);
    
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

    if (heads > tails) {
        printf("%s won!\n", name);
    } else {
        printf("%s lost!\n", name);
    }

    return 0;
}