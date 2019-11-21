#include <iostream>
#include <string.h>
using namespace std;
void tri_iteratif(const char* tableau[], int taille)
{
    const char* temp;
    int i, j;
    for (i = 0; i < taille; i++)
    for (j = 0; j < taille; j++)
    if (strcmp(tableau[i], tableau[j]) < 0)
    {
        temp = tableau[i];
        tableau[i] = tableau[j];
        tableau[j] = temp;
        
    }
    
}
        int main(void)
        {
            const char* valeurs[]={"AA","CC","BB","EE","DD"};
            int i;
            tri_iteratif(valeurs, 5);
            for (i = 0; i < 5; i++)
            cout  << valeurs[i] << " ";
            
        }
