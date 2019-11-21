// Recherche binaire dans un tableau// 
#include <iostream.h> 
// à utiliser si vous êtes sur Wind
// #include <iomanip.h> 
// à utiliser si vous êtes sur wind#include <iostream>
#include <iomanip>
using namespace std;
int Recherche_bin(int [], int, int, int, int);
void Imprime_entete(int);
void Imprime_ligne(int [], int, int, int, int);
main()
{
const int Dim_Tableau = 15;
int a[Dim_Tableau], Cle, resultat;
for (int i = 0; i < Dim_Tableau; i++)
a[i] = 2 * i; 
// Génération de données
cout << "Entrer un nombre entre 0 et 28: ";
cin >> Cle; 
Imprime_entete(Dim_Tableau); 
resultat   =   Recherche_bin(a,   Cle,   0,   Dim_Tableau -1, Dim_Tableau);
if (resultat != -1)cout  <<  endl  <<  Cle  <<  "  est  retrouvéen  position "<< resultat << endl;
else
cout << endl << Cle << " introuvable" << endl;
return 0;
}
// Recherche binaire
int Recherche_bin(int b[], int CleRecherche, int inferieur, int superieur, int grandeur)
{
int milieu;while (inferieur <= superieur) 
{
milieu = (inferieur + superieur) / 2;
Imprime_ligne(b, inferieur, milieu, superieur, grandeur);
if (CleRecherche == b[milieu]) 
// Élément recherché est trouvé
return milieu;
else if (CleRecherche < b[milieu])
superieur = milieu -1; 
// Recherche dans la partie inférieure
else
inferieur = milieu + 1; 
// Recherche dans la partie supérieure
}
return -1; 
// Clé de recherche introuvable
}
// Imprimer en-tête à l’écran 
void Imprime_entete(int grandeur) 
{
cout << endl << "Positions:" << endl;
for (int i = 0; i < grandeur; i++)
cout << setw(3) << i << ' '; 
// setw(3) Limite le nombre de caractères à 3
cout << endl; for (i = 1; i <= 4 * grandeur; i++)
cout << '-';cout << endl;
}
// Impression ligne par ligne des éléments du tableau à être 
// traités
void  Imprime_ligne  (int  b[],  int  inferieur,  int  mid,  int superieur, int grandeur)
{
for (int i = 0; i < grandeur; i++)
if (i < inferieur || i > superieur)
cout << " ";
else if
(i == mid)cout  <<  setw(3)  <<  b[i]  <<  '*';  
//  Étiqueter la valeur du milieu
else
cout << setw(3) << b[i] << ' ';
cout << endl;
}
