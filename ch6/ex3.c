#include <stdio.h>

#define MAX 50

void split(char input[], char string1[], char string2[]);

int main()
{
	
	char input[MAX], field1[MAX], field2[MAX];
	
    fgets(input, MAX, stdin);
    
    split(input, field1, field2);
    printf("String 1: %s, string 2: %s\n", field1, field2);
    
}

void split(char s[], char a[], char b[])
{
	int i = 0;
	while (s[i] != ('\0')){
	   if ((s[i] == ' ')|| (s[i] == '\t')|| (s[i] == '\n')) {
            s[i] = '\0';
            break;
        }
        i++;
	}
	int h = i  + 1;
	for (i = 0; s[i] != '\0'; i++){
        a[i] = s[i];
    }
    a[i] = '\0';
    
    i = 0;
	for (; s[h] != '\0'; h++){
		b[i] = s[h];
		i++;
    }
    b[i] = '\0';
}

