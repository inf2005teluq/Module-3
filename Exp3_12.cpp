#include <iostream> 
#include <string> 
#include <cstring>
using namespace std;
int main() {
  string a = "Aujourd’hui nous sommes lundi";
  int i = a.find('u');
  while (i != -1) {
    cout << i << endl;
    i = a.find('u', i + 1);
  }
}
