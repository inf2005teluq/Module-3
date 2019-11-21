#include <stdio.h>
#include <ctype.h>
using namespace std;
main(){char chaine[] = "J'AIME BIEN PROGRAMMER EN C PLUS PLUS";
int i;
for (i = 0; chaine[i]; i++)
putchar(tolower(chaine[i]));
putchar('\n');
    
}
