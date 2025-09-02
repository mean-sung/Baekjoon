#include <stdio.h>

void NamingBasket(int basket[], int N);
void ReverseBasket(int basket[], int i, int j);
void PrintBasket(int basket[], int N);

int main(void)
{
    int N, M = 0;
    int i, j = 0;
    scanf("%d %d", &N, &M);

    int basket[N];
    NamingBasket(basket, N);

    for (int r = 0; r < M; r++)
    {
        scanf("%d %d", &i, &j);
        ReverseBasket(basket, i - 1, j - 1);
    }

    PrintBasket(basket, N);

    return 0;
}

void NamingBasket(int basket[], int N)
{
    for (int i = 0; i < N; i++)
    {
        basket[i] = i + 1;
    }
}

void ReverseBasket(int basket[], int i, int j)
{
    for (int r = 0; r < (j - i) / 2 + 1; r++)
    {
        int temp = basket[i + r];
        basket[i + r] = basket[j - r];
        basket[j - r] = temp;
    }
}

void PrintBasket(int basket[], int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", basket[i]);
    }
}