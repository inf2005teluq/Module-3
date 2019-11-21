#include <iostream>
using namespace std;
#include <ctype.h>
#include <stdlib.h>
main(){
    char lettre;
    do{
        cout <<"B Modification de l\'heure système "<<endl;
        cout <<"Q Quitter"<<endl;
        cout <<"Votre choix : "<<endl;
        cin >> lettre;
        if (lettre == 'B')system("TIME");}
        while (lettre != 'Q');
        return 0;
    
}
