#include <iostream>
using namespace std;
main(){
    int somme = 0, nombre, valeur;
    cout << "Entrer le nombre de valeurs à additionner : ";
    cin >> nombre;
    for (int i = 1; i <= nombre; i++) 
    {
        cout << "Entrer une valeur : ";
        cin >> valeur;
        somme += valeur;
        
    }
    cout << "La somme des " << nombre << " valeurs est : " << somme << endl;
    return 0;
    
}
