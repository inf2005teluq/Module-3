#include <iostream>
using namespace std;
#include <time.h>
main ()
{
    time_t temps_act;
    time(&temps_act);  
    // Déterminer le temps actuel en secondes
    cout <<"La date et l'heure sont :"<< ctime(&temps_act);
    return 0;
    
}
