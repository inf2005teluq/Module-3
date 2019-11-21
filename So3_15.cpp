#include <iostream>
using namespace std;
int celsius(int);
int fahrenheit(int);
main(){
    cout << "Degrés Fahrenheit équivalents aux températures en Celsius :" << endl << "Celsius\t\tFahrenheit" << endl;
    for (int i = 0; i <= 100; i++)
    cout << i << "\t\t" << fahrenheit(i) << endl;
    cout << endl << "Degrés Celsius équivalents aux températures en Fahrenheit :" << endl << "Fahrenheit\tCelsius" << endl;

for (int i = 32; i <= 212; i++) 
cout << i << "\t\t" << celsius(i) << endl;
return 0;
}
int celsius(int fTemp) {
  return (int)(5.0 / 9.0 * (fTemp - 32));
}
int fahrenheit(int cTemp) {
  return (int)(9.0 / 5.0 * cTemp + 32);
}
