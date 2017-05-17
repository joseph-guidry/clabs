#include <stdio.h>
int argcompare(char s[], char arg[]);

int main(int argc, char *argv[])
{
    if (argc == 2){
        if (argcompare(argv[1], "swordfish")){
            printf("Access Granted\n");
            return(0);
        }
    }
    printf("Access Denied\n");
}  

int argcompare(char *s, char *arg)
{
    while(*s++ == *arg++){
        if (*s == '\0')
            return(1);
    }
    return(0);
}
