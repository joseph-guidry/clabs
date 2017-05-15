#include <stdio.h>

#define MAX 20

void mystrcpy(char *to, char *from);

int main(void)
{
    char line[MAX] = {"there is anoterh'\0'"}, text[MAX];

    fgets(line, sizeof(line), stdin);
    mystrcpy(text, line);

    printf("%s\n", line);
    printf("%s\n",text);

}

void mystrcpy(char *to, char *from)
{
    int d = 1;
    while(*from){
        
        *to = *from;
        printf("Here: %c and %c rounds: %d\n", *to, *from, d);
        to++;
        from++;
        d++;
    }
    printf("Here 2 : %c and %c Rounds: %d\n", *to, *from, d);
}
