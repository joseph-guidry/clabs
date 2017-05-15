#include <stdio.h>

#define MAX 25

void myreverse(char *);
void changecase(char *in);
int mystrcmp(char *first, char *second);

int main(void)
{
    char input_text[MAX];

    printf("Enter a word to reverse: ");
    fgets(input_text, MAX, stdin);
    
    int i;

    while(input_text[i++] != '\0'){
        if (input_text[i] == '\n')
            input_text[i] = '\0';
    }

    myreverse(input_text);
    printf("End reverse:%s \n", input_text);

    changecase(input_text);
    printf("%s \n", input_text);

    char input_text2[MAX];
    printf("Enter a word to compare: ");
    fgets(input_text2, MAX, stdin);
    if( mystrcmp(input_text, input_text2) == 0){
        printf("%s and %s are the same\n", input_text, input_text2);
    } else {
        printf("%s and %s are the not same\n", input_text, input_text2);
    }
    
}
int mystrlen(char *s)
{
    int ct = 0;
    while(*s != '\0') {
        s++;
        ct++;
    }
    return ct;
}
void myreverse(char *in)
{
    int len;
    len = mystrlen(in);
    char temp, *px;
    for(px = in + len - 1; px >= in ; px--){
        temp = *in;
        *in++ = *px;
        *px = temp;
    }
}
void changecase(char *in)
{
    while(*in != '\0'){
        if (*in < 'a')
            *in = *in - 'A' + 'a';
        else
            *in = *in - 'a' + 'A';
        in++;
    }
}

int mystrcmp(char *first, char *second)
{
    while(*first++ == *second++){
        if(*first == '\0'){
            return 0;
        }
    }
    return 1;
}

