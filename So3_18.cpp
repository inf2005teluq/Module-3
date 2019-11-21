#include <iostream>
using namespace std;
int TriplerParValeur (int);
void TriplerParReference (int &);
main()
{
    int valeur, &valeurRef = valeur;
    cout << "Entrer un entier : ";
    cin >> valeur;
    cout << endl << "La valeur avant l’appel de la fonction TriplerParValeur () est : " << valeur << endl 
    << "La valeur obtenue de TriplerParValeur () est : "<< TriplerParValeur (valeur) << endl 
    << " Après TriplerParValeur(), la valeur dans main est : " << valeur << endl << endl << 
    "La valeur avant l’appel de TriplerParReference () est : " << valeur << endl;
    
    TriplerParReference (valeurRef);

cout << "La valeur (dans main) après l’appel de TriplerParReference () est : " << valeur << endl;
return 0;
}
