#include "mano_lib.hpp"
#include "studentas.hpp"

int main() {
  vector<studentas> mas;
  int n, m; char kl = 't';
  string var, pav; vector<int> temp; int egz;
  
  while (kl=='t' || kl=='T') {
    cout << "Įveskite vardą: "; cin >> var;
    cout << "Įveskite pavardę: "; cin >> pav;
    cout << "Įveskite egzamino pažymį: "; cin >> egz;
    cout << "Įveskite semestro pažymius: ";
    while (true) {
      cout << "Įveskite pažymį: "; cin >> m;
      temp.push_back(m);
      cout << "Ar vesite dar ? t/n"; cin >> kl;
      if (kl!='t') break;
    }
    studentas tempas(var, pav, temp, egz);
    mas.push_back(tempas);
    temp.clear();
    temp.resize(0);
    cout << "Ar vesite dar ? t/n"; cin >> kl;
  }
  for (studentas laik: mas)
    cout << laik.get_vardas() << " " << laik.get_pavarde() << " " << laik.get_egz() << endl;
}