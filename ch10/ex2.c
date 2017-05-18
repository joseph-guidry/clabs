#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main(int argc, char **argv)
{
    FILE *fpin;
    int i = 1;
    char line[MAX];

    while( --argc > 0 ) {
          if((fpin = fopen(argv[i++], "r")) == NULL){
               fprintf(stderr, "Can't open %s\n", argv[i]);
               continue;
          }
          while(fgets(line, MAX, fpin) != NULL) {
               printf("%s", line);
          }
          fclose(fpin);
    }
    return 0;
}
