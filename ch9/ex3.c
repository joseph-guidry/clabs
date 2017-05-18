#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SHOPSIZE 5
#define NAMESIZE 20

struct member {
    char first_name[NAMESIZE];
    char last_name[NAMESIZE];
};

void print(struct member *array, int howmany);
int fill(struct member *array, int number);
void sort(struct member *array, int number);
int compare_by_len(struct member *person1, struct member *person2);

int main(void)
{
    struct member shop[SHOPSIZE];
    static int i = 0;
    while(fill(shop, i++)) {

        if (i == SHOPSIZE)
        {
            printf("FULL\n");
            break;
        }
    }
    printf("before sorting:\n");

    print(shop,  i);
    printf("before sorting:\n");
    
    qsort(shop, i, sizeof(struct member), (const void*)compare_by_len);
    printf("after qsort sorting:\n");
    print(shop, i);
    
    sort(shop,  i);
    printf("after bubble sorting:\n");
    
    print(shop, i);
    return 0;
}
void print(struct member array[], int howmany)
{
 	int i; 	
    
	for (i = 0; i < howmany; i++) {
 		printf("%s %s\n", array[i].first_name, array[i].last_name);
	}
}

int fill(struct member *shop, int i)
{
        char temp[NAMESIZE];

        printf("Enter first name (or 'quit'): ");
        fgets(temp, NAMESIZE, stdin);
        temp[strlen(temp) - 1] = '\0';

        if(strcmp(temp, "quit") == 0)
        {
            return 0;
        }
        
        strcpy(shop[i].first_name, temp); 

        printf("Enter last name: ");
        fgets(temp, NAMESIZE, stdin);
        temp[strlen(temp) - 1] = '\0';

        strcpy(shop[i].last_name, temp); 

        
    return 1;
}

int compare_by_len(struct member *person1, struct member *person2)
{
    if (strlen(person1 -> last_name) > strlen(person2 -> last_name))
    {
        return 1;
    }
    else if (strlen(person1 -> last_name) < strlen(person2 -> last_name))
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

void sort(struct member *array, int number)
{
    int i, j;
    struct member temp;

    for(i = 0; i < number; i++)
        for (j = i + 1; j < number; j++)
            {
                if (strcmp(array[i].first_name, array[j].first_name) > 0 )
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                
                }
            }
}

