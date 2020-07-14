#include <iostream>
#include <string.h>
using namespace std;

    int main() {
    const int LongMax = 80;
    char Chaine1[] = "Nul n'est prophète en son pays";
    char Chaine2[LongMax + 1];
    strncpy(Chaine2, Chaine1, LongMax);
    cout << "Chaine1 : " << Chaine1 << endl;
    cout << "Chaine2 : " << Chaine2 << endl;
    return 0;
  }
