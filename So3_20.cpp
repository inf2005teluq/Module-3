#include <iostream>
using namespace std;
main(){
    int ligne, colonne;
    float table[3][5] = {{10.0, 20.0, 30.0, 40.0, 50.0},{60.0, 70.0, 80.0, 90.0, 100.0},{110.0, 120.0, 130.0, 140.0, 150.0}};
    for (ligne = 0; ligne < 3; ligne ++)
    for (colonne = 0; colonne < 5; colonne ++)
    cout <<" Ligne : "  <<ligne << " Colonne : "  << colonne << " "<< "Nombre : " <<table[ligne][colonne]<<endl;
    return 0;
    
}
