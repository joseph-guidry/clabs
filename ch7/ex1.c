#include <stdio.h>
#include <string.h>

#define MAX 100

void reverse(char string[]);
int mystrcmp(char string1[], char string2[]);
void strip(char s[], char nl);

int main()
{
    char line[MAX], palindrome[MAX];
    printf("Enter: \n");
    fgets(line, MAX, stdin);
    strip(line, '\n');
    strcpy(palindrome, line);
    reverse(line);
    printf("%s\n", line);
    if (mystrcmp(line, palindrome) == 0){
    	printf("They are the same\n");
    }else
    	printf("They are the not same\n");
    
}

void strip(char s[], char nl)
{
	for (int i = 0; i < MAX; i++)
		if (s[i] == nl)
			s[i] = '\0';
}
void reverse(char s[])
{
	char temp;
	int i = 0, x = strlen(s) - 1;
	while(i < x){
		temp = s[i];
		s[i] = s[x];
		s[x] = temp;
		x--;
        i++;
	}
}

int mystrcmp(char string1[], char string2[])
{
	int i = 0;
	while (string1[i] != '\0'){
		if (string1[i] != string2[i]){
			return 1;
		}
		i++;
		
	}
	return 0;
}
