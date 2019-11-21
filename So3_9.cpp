#include <iostream>
using namespace std;
main(){
    float litres, kilometres, totalLitres = 0.0, totalKilometres = 0.0, moyenne;
    cout << "Entrer le nombre de litres utilisés (-1 pour finir) : ";
    cin >> litres;
    while (litres != -1.0) {totalLitres += litres;
    cout << "Entrer le nombre de kilomètres parcourus : ";
    cin >> kilometres;totalKilometres += kilometres;
    cout << "Le nombre de km/litre pour ce plein est : " << kilometres/litres << endl << endl << "Entrer le nombre de litres utilisés (-1 pour finir) : ";
cin >> litres;
        
    }
    moyenne = totalKilometres / totalLitres;
    cout << endl << "La moyenne globale de km/litre est : " << moyenne << endl;
    return 0;
    
}
