#include <stdio.h>
int argcompare(char s[], char arg[]);

int main(int argc, char *argv[])
{
    if (argc == 2){
        if (argcompare(argv[1], "swordfish")){
            printf("Access Granted");
            return(0);
        } else{
            printf("here");
        }
    }
    printf("Access Denied");
}  

int argcompare(char s[], char arg[])
{
    int i = 0;
    while(s[i] == arg[i]){
        if (s[i++] == '\0')
        return(1);
    }
    return(0);
}
