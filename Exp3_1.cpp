// Exemple de déclaration de fonctions
// Déclaration de la fonction somme
int somme (int, int);
// Fonction principale qui fait appel à la fonction somme
# include <iostream> 
using namespace std;
int main (void) 
{
int sommecalculer = somme (2,5);
cout<<" sommecalculer = : "<< sommecalculer << endl; 
return (0);
// Définition de la fonction somme
}
int somme (int premierNombre, int deuxiemeNombre)
{
return (premierNombre + deuxiemeNombre); 
// Retourne la
// somme
}
