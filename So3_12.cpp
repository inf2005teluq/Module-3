#include <iostream>
using namespace std;
#include <iomanip>
main(){
    int produit, quantite;float total = 0.0;
    cout << "Entrer le numéro du produit et la quantité vendue." << endl<< "Entrer -1 pour indiquer la fin de l’entrée des données : ";
    cin >> produit;
    while (produit != -1) {
        cin >> quantite;
        switch (produit) {
            case 1:total += quantite * 2.98;
            break;
            case 2:total += quantite * 4.50;
            break;
            case 3:total += quantite * 9.98;
            break;
            case 4:total += quantite * 4.49;
            break;
            case 5: total += quantite * 6.87;
            break;
default: cout << " Numéro de produit invalide: " << produit << endl << "            Quantité: " << quantite << endl;
break;
}
cout << "Entrer le numéro du produit et la quantité vendue." << endl << " Entrer -1 pour indiquer la fin de l’entrée des données : ";
cin >> produit;
}
cout.setf(ios::fixed | ios::showpoint);
cout << "La valeur totale des ventes est : " << setprecision(2) << total << endl;
return 0;
}
