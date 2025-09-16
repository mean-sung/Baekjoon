#include <stdio.h>
#define MAX 100

int main(void)
{
    int N;
    scanf("%d",&N);
    
    char num[MAX];
    scanf("%s", num);
    
    int sum = 0;
    for(int i = 0; i < N; i++){
        sum += (num[i] - '0');
    }

    printf("%d",sum);

    return 0;
}