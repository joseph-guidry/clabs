#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLINE 100

char *acronym(char *original);

int main(int argc, char **argv)
{
    char phrase[MAXLINE];
    
    printf("Enter a phrase to turn into an acronym:\n");
    fgets(phrase, MAXLINE, stdin);
    printf("\nThe acronym is: %s\n", acronym(phrase));
}
char *acronym(char *original)
{
    static char buffer[MAXLINE];
    char string[MAXLINE];
    char *ptr, firstLetter;
    int i = 0;
    
    strcpy(string, original);  //  don't want to change original
    buffer[0] = '\0';
    
    ptr = strtok(string, " ,.");
    while (ptr != NULL) {
	if(strcasecmp(ptr, "and") == 0 || strcasecmp(ptr, "of") == 0 ||
           strcasecmp(ptr, "the") == 0 || strcasecmp(ptr, "for") == 0) {
            // skip these words
	} else {
            firstLetter = *ptr;
            buffer[i++] = toupper(firstLetter);
        }
        ptr = strtok(NULL, " ,.");
    }

    buffer[i] = '\0';
    return buffer;
}
