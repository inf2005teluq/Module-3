// Exemple de tri a bulle
#include <iostream> 
#include <iomanip> 
using namespace std; 
// pour linux
int main ()
{
const int NombreElement = 10;
int Tampon = 0;
int TableauNote[10]={1,5,7,89,64,75,32,45,56,10};
cout<< "Ordre initial des éléments du tableau est : "<<endl;
for(int i=0;i< NombreElement; i++)
{
cout<< TableauNote[i]<<endl;}
for(int iteration =0;iteration < NombreElement-1;iteration++)
for(int i=0; i< NombreElement-1; i++)
if(TableauNote[i]> TableauNote[i+1])
{
Tampon = TableauNote[i];
TableauNote[i]= TableauNote[i+1];
TableauNote [i+1]= Tampon;
}
cout<<endl<<"Les données dans l'ordre croissant sont: "<<endl;
for(int j=0; j< NombreElement-1; j++)
cout<<" "<<TableauNote[j]<<" "<<endl;
return 0;
}
