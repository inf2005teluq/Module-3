#include <stdio.h>
#include <ctype.h>
using namespace std;main()
{
    char chaine[] = "J'aime bien programmer en C plus plus";
    int i;
    for (i = 0; chaine[i]; i++)
    putchar(toupper(chaine[i]));
    putchar('\n');
    
}
