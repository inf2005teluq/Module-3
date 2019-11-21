

// Exemple de passage de valeurs par référence. 
// Déclaration de la fonction#include <iostream>
using namespace std;int somme (int &);
// Fonction principaleint 
main ()
{
int un = 4, deux= 3;
cout<< "La valeur de un avant l’appel de la fonction est de :un= "<<un<<endl;
int sommecalculer = somme (un);
cout<< "La valeur de un après l’appel de la fonction : un= "<<un<< " "<<endl;
cout<< "sommecalculer : sommecalculer = "<<sommecalculer<<endl;
return 0;
}
// Définition de la fonction somme
int somme (int &premierNombre)
{
premierNombre += premierNombre;
return (premierNombre);
}
