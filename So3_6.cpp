#include <stdio.h>

#include <string.h>

using namespace std;
main() {
  printf("Recherche de Sam dans Samuel %s\n", (strstr("Samuel", "Sam")) ? "Trouvé" : "Non trouvé");
  printf("Recherche de Jack dans Jacques %s\n", (strstr("Jacques", "Jack")) ? "Trouvé" : "Non trouvé");
  printf("Recherche de Christ dans Christine %s\n", (strstr("Christine", "Christ")) ? "Trouvé" : "Non trouvé");

}
