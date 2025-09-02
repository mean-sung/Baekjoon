#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[1000000];
    int word = 0, len;
    
    scanf("%[^\n]s", sentence);
    len = strlen(sentence);
    
    if (len == 1 && sentence[0] == ' ') {
        printf("%d", word);
        
        return 0;
    }
    
    for (int i = 1; i < len - 1; i++) {
        if (sentence[i] == ' ') {
            word++;
        }
    }
    
    printf("%d", word + 1);
    
    return 0;
}