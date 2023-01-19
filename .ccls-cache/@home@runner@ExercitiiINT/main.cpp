#include <iostream>
using namespace std;

int main() {
  
  float r;
  float i;
  float u;

  cout << "Calculator Rezistenta Electrica >>>> Legea lui OHM <<<<" << endl << endl;
  cout << "r=u/i" << endl << endl;
  cout << "Introduceti valorile celor doua variabilele cunoscute" << endl;
    
  cout << "Valoarea Tensiunii: ";
  cin >> u;
  cout << "Valoarea Intensitatii: ";
  cin >> i;

  r= u/i;
  
  cout << "Valoarea Rezistentei: " <<  r << " ohm" << endl;

  cin.ignore();

}