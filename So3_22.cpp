#include <iostream>
#include <cstdlib>
using namespace std;
void tri_selectif(int tableau[ ], int grosseur)
{
    int temp, courant, j;
    for (courant = 0; courant < grosseur; courant++)
    for (j = courant + 1; j < grosseur; j++)
    if (tableau[courant] > tableau[j])
    {
        temp = tableau[courant];
        tableau[courant] = tableau[j];

tableau[j] = temp;
}
}
main() {
  int valeurs[30], i;
  for (i = 0; i < 30; i++) 
  valeurs[i] = rand() % 1000;
  tri_selectif(valeurs, 30);
  for (i = 0; i < 30; i++) 
  cout << valeurs[i] << " ";
  return 0;
}
