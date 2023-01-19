#include <iostream>
using namespace std;

int main() {
  
  float r;
  float i;
  float u(u>=0);
  char n;
  char necunoscute;
  
  cout << "========================================================" << endl;
  cout << '\t'<<'\t'<<'\t'<<">>>> Legea lui OHM  <<<< I = U/R >>>>" << endl;
  cout << "========================================================" << endl;

  cout << "Alegeti necunoscuta: r,i,u ? " << endl << endl;
  cin >> necunoscute;
  cout << necunoscute << endl;
  cout << "Introduceti valorile celor doua variabilele cunoscute: "<< endl << endl;
    
  cout << "Valoarea Tensiunii: ";
  cin >> u;
  // cout << u << "volti";
  //cout << "volti" << endl;
  
  cout << "Valoarea Intensitatii: ";
  cin >> i;
  //cout << "amperi" << endl;

  cout << "Valoarea Rezistentei: ";
  cin >> r;
  
  
  //n = {i,r,u};


  
  // i = u/r;
  r = u/i;
  // u = i*r;
  
  cout << "Valoarea Rezistentei: " <<  r << " ohm" << endl;
  cout << "Nr. Octeti - variabila r: " << sizeof(r) << endl; // lungimea în octeți ocupată de variabila r

  cin.ignore();
  return 0;
}