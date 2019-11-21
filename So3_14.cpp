#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
void arrondir(void);
main(){
    arrondir();
    return 0;
    
}
void arrondir(void)
{
    double x, y;
    cout.setf(ios::fixed | ios::showpoint);
    for (int boucle = 1; boucle <= 5; boucle++) 
    {
        cout << "Entrer une valeur décimale : ";
        cin >> x;y = floor(x + .5);
        cout << x << " peut être arrondi à " << setprecision(1) << y << endl;
        
    }
    
}
