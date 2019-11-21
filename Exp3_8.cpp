include <iostream>
using namespace std;
int main()
{
char buffer[80];cout << "Entrez une chaine : ";cin.get(buffer, 79);    
// Lire 79 caractères ou  //jusqu'à newline
cout <<"Contenu du tampon : " << buffer << endl;
return 0;
}
