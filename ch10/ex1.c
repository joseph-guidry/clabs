#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv)
{

    printf("%u\n", (unsigned) -1 );
    FILE *pfile1, *pfile2;
    //char *file1_contents, *file2_contents;
    char f1, f2;

//Attempt to open file 1.
    if((pfile1 = fopen(argv[1], "r")) == NULL)
    {
        printf("Cound not open %s\n", argv[1]);
        exit(1);
    }
//Attempt to open file 2.
    if((pfile2 = fopen(argv[2], "r")) == NULL)
    {
        printf("Cound not open %s\n", argv[1]);
        exit(1);
    }

    int x = 0;
    printf("before while\n");
    while((f1 = getc(pfile1)) && (f2 = getc(pfile2)))
    {
        printf("inside while\n");
        
        printf("%x %x \n", f1, f2);
        if (f1 == f2)
        {
            if (f1 == EOF)
                
                break;
        }
        else
        {
            printf("%s and %s are not the same\n", argv[1], argv[2]);
            return 0;
        }
        x++;
    }

    fclose(pfile1);
    fclose(pfile2);
    printf("%s and %s are the same\n", argv[1], argv[2]);
    return 0;
}
