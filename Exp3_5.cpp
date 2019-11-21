// Recherche linéaire dans un tableau#include <iostream>using namespace std;int Recherche_lin(int [], int, int);
main(){
const int Dim_Tableau = 100; 
int a[Dim_Tableau], CleRecherche, element;
for (int x = 0; x < Dim_Tableau; x++) 
// Génération des données
a[x] = 2 * x;
cout << "Entrer la clé de recherche :" << endl; 
cin >> CleRecherche; 
element = Recherche_lin(a, CleRecherche, Dim_Tableau);
if (element != -1)
cout  <<  "  Position  de  la  valeur  trouvée  "  <<  element  << endl;elsecout << "Valeur introuvable" << endl;
return 0;
} 
int Recherche_lin(int table[], int Cle, int Dimension)
{
for (int n = 0; n < Dimension; n++)
if (table[n] == Cle)
return n;
return 0;
}
