#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int countMinus = 0;
        char PS[51];
        scanf("%s", PS);
        int count = 0;

        for (int i = 0; i < strlen(PS); i++)
        {
            count += (PS[i] == '(') ? 1 : -1;
            if (count < 0)
            {
                printf("NO\n");
                countMinus++;
                break;
            }
        }
        if (countMinus == 0)
            printf("%s\n", (count == 0) ? "YES" : "NO");
    }

    return 0;
}