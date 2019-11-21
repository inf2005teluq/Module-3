#include <iostream>
#include <string.h>
using namespace std;
main(){
char tampon[64] = "J'aime programmer en C/C++";
char destination[64];
int longueur;
longueur = strxfrm(destination, tampon, sizeof(tampon));
cout <<"Longueur : "<< longueur <<endl;
cout <<"Destination : "  <<  destination <<endl;
cout << "Tampon : "  <<  tampon  <<endl;
return 0;
    
}
