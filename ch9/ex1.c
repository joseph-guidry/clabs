#include <stdio.h>
#include <stdlib.h>

struct money{
    int dollar;
    int cent;
};


void create_account(struct money *acct);
void add(struct money *a, struct money *b, struct money *c);
struct money new(int a, int b);


int main(int argc, char **argv)
{
    struct money user1, user2, user3; 
    
    user3 = new(5, 55);
    printf("$%d.%d\n", user3.dollar, user3.cent);
    create_account(&user1);
    printf("$%d.%02d\n", user1.dollar, user1.cent);
    printf("\n");
    create_account(&user2);
    printf("$%d.%02d\n", user2.dollar, user2.cent);

    add(&user1, &user2, &user3);

    print_acct(&user1)
}
struct money new(int a, int b)
{
    struct money temp;
    temp.dollar = a;
    temp.cent = b;

    return temp;
}

void create_account(struct money *acct)
{
    char input[10];
    acct -> dollar = 0; 
    acct -> cent = 0;

    printf("Enter the dollar amount: ");
    fgets(input, sizeof(input), stdin);
    acct -> dollar = atoi(input);

    printf("Enter the cent amount: ");
    fgets(input, sizeof(input), stdin);
    acct -> cent = atoi(input);
}

void add(struct money *a, struct money *b, struct money *c)
{   
    c -> dollar = 0; 
    c -> cent = 0;
    c -> cent = a -> cent + b -> cent;
        if(c -> cent > 99){
            c -> dollar += c -> cent/100;
            c -> cent %= 100;
        }
    c -> dollar = c -> dollar + a -> dollar + b -> dollar;
    
    printf("$%d.%02d\n", c -> dollar, c -> cent);
}
