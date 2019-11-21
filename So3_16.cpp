#include <iostream>
using namespace std;
int cotePoints(int);
main(){
    int moyenne;
for (int boucle = 1; boucle <= 5; boucle++) 
{
    cout << endl << "Entrer la note moyenne de l’étudiant : ";
    cin >> moyenne;
    cout << moyenne << " vaut, sur une échelle de 4 points, "<< cotePoints(moyenne) << endl;
    
}
return 0;
    
}
int cotePoints(int moyenne){
    if (moyenne >= 90)
    return 4;
    else
    if (moyenne >= 80)
    return 3;
    else
    if (moyenne >= 70)
    return 2;
    else
    if (moyenne >= 60)
    return 1;
    else 
    return 0;
    
}
