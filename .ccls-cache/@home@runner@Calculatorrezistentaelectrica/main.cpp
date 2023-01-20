#include <iostream>
using namespace std;

int main() {
  char n;
  cout << "========================================================" << 
endl;
  cout << '\t'<<'\t'<<">>>OHM's LAW CALCULATOR  <<<< I = U/R >>>>" << endl;
  cout << "========================================================" << 
endl;
  cout << "Select which value you need to calculate: r, u, i" << endl << endl;
  cin >> n;

  switch(n) {
   
    case 'r':
      int i;
      int u;
      float r;
      
      cout << "Rezistance"<< endl<< endl;
      cout << "Type Voltage(u) Value !" << endl;
      cin >> u;
      cout<< "Volts" <<endl << endl;
      cout << "Type Curent(i) Value !" << endl;
      cin >> i;
      cout<< "Ampers"<<endl<<endl;
      r = u/i;
      cout << "Resitance = " << r << " Ohms" << endl;
      break;
    
    case 'u':
      int in;
      int te;
      int re;
      
      cout << "Voltage"<< endl << endl;
      cout << "Type Curent Value !"<<endl;
      cin >> in;
      cout << "Ampers" << endl<<endl;
      cout << "Type Resitance Value !"<< endl;
      cin >> re;
      cout<< "Ohms"<<endl<<endl;
      te = in*re;
      cout << "Voltage = " << te << " Volts" << endl;
      break;

    
    case 'i':
      int intensitate;
      int tensiune;
      int rezistenta;
      
      cout << "Curent"<< endl;
      cout << "Type Voltage(u) Value !"<< endl;
      cin >> tensiune;
      cout<< "Volts"<<endl << endl;
      cout << "Type Resitance(r) Value !"<< endl;
      cin >> rezistenta;
      cout<<"Ohms"<< endl<< endl;
      
      intensitate = tensiune/rezistenta;
      cout << "Curent = " << intensitate << " Ampers" << endl;
      break;
    
    
    
    default:
       cout << "Enter only: r, u, i";

   
   }

  
}