#include <iostream>
using namespace std;
main(){
    // Moitié du haut
    for (int ligne = 1; ligne <= 5; ligne++) {
        for (int espace = 1; espace <= 5 -ligne; espace++)
        cout << ' ';
        for (int asterisque = 1; asterisque <= 2 * ligne -1; asterisque++)
        cout << '*';
        cout << endl;
        
    }
    // Moitié du bas
    for (int ligne = 4; ligne >= 1; ligne--) 
    {
        for (int espace = 1; espace <= 5 -ligne; espace++)
        cout << ' ';
        for (int asterisque = 1; asterisque <= 2 * ligne -1; asterisque++)
        cout << '*';

cout << endl;
}
return 0;
}
