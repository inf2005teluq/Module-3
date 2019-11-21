#include <iostream>
#include<stdio.h>
using namespace std;

void salut(void)
{
    cout <<"Salut, tout le monde!" <<"\n";
    
}
void nombre_message (int nombre_fois)
{
    int compteur;
    for (compteur = 1; compteur <= nombre_fois; compteur++)
    salut();
    
}
    main()
    {
        cout <<"Affiche deux fois lemessage" <<"\n";
        nombre_message(2);
        cout <<"Affiche sept fois le message" <<"\n";
        nombre_message(7);
        return 0;
        
    }
