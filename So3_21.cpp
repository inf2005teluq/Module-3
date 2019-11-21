#include <iostream>
#include <cstdlib>
using namespace std;
void tri_iteratif(int tableau[ ], int grosseur)
{
    int temp, i, j;
for (i = 0; i < grosseur; i++)
for (j = 0; j < grosseur; j++)
if (tableau[i] < tableau[j])
{
    temp = tableau[i];
    tableau[i] = tableau[j];
    tableau[j] = temp;
    
}
    
}
main()
{
    int valeurs[35], i;
    for (i = 0; i < 35; i++)
    valeurs[i] = rand() % 1000;
    tri_iteratif(valeurs, 35);
    for (i = 0; i < 35; i++)
    cout << valeurs[i] << " ";
    return 0;
    
}
