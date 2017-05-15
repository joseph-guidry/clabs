#include <stdio.h>

#define MAX 25

int alphacheck(char s[]);
void getaline(char s[]);

int main()
{
	char line[MAX];
	///getaline(line);
	if (alphacheck("h3llo") == 1)
		printf("The string has only letters: %s\n", line);
	else
		printf("Non-Alpha!!");
}

void getaline(char line[])
{
	int i = 0;
	char c;
	while((c = getchar()) != EOF)
		line[i++] = c;
	line[i] = '\0';
}

int alphacheck(char string[])
{
    
	for(int i = 0; string[i] != '\0' ; i++){
		if (string[i] >= 'A' && string[i] <= 'z'){
			continue;
		}
		//if (string[i] >= 'a' && string[i] <= 'z'){
			//continue;

	   // }
	    return 0;
	
    }
    return 1;
}

