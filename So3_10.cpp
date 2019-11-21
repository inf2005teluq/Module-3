#include <iostream>
using namespace std;
main(){
    int colonne = 8, ligne;
    while (colonne--> 0) 
    {
        ligne = 8;
        if (colonne % 2 == 0)
        cout << ' ';
        while (ligne--> 0)
        cout << "* ";
        cout << endl;
        
    }
    return 0;
    
}
