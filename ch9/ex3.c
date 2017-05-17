#include <stdio.h>
#include <string.h>

#define SHOPSIZE 2

struct member {
    char *first_name;
    char *last_name;
};

void fill(struct member *person, int number);
void add_member(struct member *person);
void print(struct member *shop, int size);
void output(struct member *person);

int main(int argc, char **argv)
{
    struct member shop[SHOPSIZE];

    fill(shop, SHOPSIZE);
    

    print(shop, SHOPSIZE);
} 

void fill(struct member *people, int number)
{
    for(int i = 0; i < number; i++){
        add_member(&people[i]);  
    }
}
void add_member(struct member *person)
{
    char first[20], last[20];

    printf("Enter the members first name: ");
    fgets(first, sizeof(first), stdin);
    first[strlen(first) - 1] = '\0';
    strcpy(person -> first_name, first);

    printf("Enter the members last name: ");
    last[strlen(fgets(last, sizeof(last), stdin)) - 1] = '\0';
    strcpy(person -> last_name, last);

}

void print(struct member *shop, int size)
{
    for(int x = 0; x < size; x++){
        output(&shop[x]);
    }
}
void output(struct member *person)
{
    printf("%s %s \n", person -> first_name, person++ -> last_name);
}

