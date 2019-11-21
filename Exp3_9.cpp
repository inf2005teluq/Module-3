
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
char Chaine1[] = "Nul n'est prophète en son pays";
char Chaine2[80];
strcpy(Chaine2,Chaine1);
cout << "Chaine1 : " << Chaine1 << endl;
cout << "Chaine2 : " << Chaine2 << endl;
return 0;
}
