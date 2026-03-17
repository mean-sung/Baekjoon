#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int *Narray = (int *)malloc(sizeof(int) * 100000);
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%d", &Narray[i]);

    int M;
    int *Marray = (int *)malloc(sizeof(int) * 100000);
    scanf("%d", &M);

    for (int i = 0; i < M; i++)
        scanf("%d", &Marray[i]);

    for (int i = 0; i < M; i++)
    {
        int correct = 0;
        for (int j = 0; j < N; j++)
        {
            if (Marray[i] == Narray[j])
            {
                printf("1\n");
                correct = 1;
            }
        }
        if (correct == 0)
        {
            printf("0\n");
        }
    }

    free(Narray);
    free(Marray);
    return 0;
}