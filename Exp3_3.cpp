//  Exemple  de  déclaration  et  d'initialisation  à  l'intérieur  // d'un bloc d’instructions (fonction)//#include <iostream.h> si vous utilisez windows//#include <iomanip.h> si vous utilisez windows
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
const int dimensiontableau =5;
int TableauEntier [dimensiontableau];
for (int i=0; i < dimensiontableau;i++)
  {
TableauEntier[i]=i+1;
  }
for (int j=0; j < dimensiontableau;j++)
  {
cout << " TableauEntier [" << j <<"] = ";
cout << TableauEntier[j] <<endl;
  }
return 0;
}
