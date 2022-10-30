#include "mano_lib.hpp"

class studentas {
  string vardas_, pavarde_;
  vector <int> nd_;
  int egz_;
//setteriai
  void vardas(string);
  void pavarde(string);
  void nd(vector <int>);
  void egz(int);
public:
//konstruktoriai
  studentas();
  studentas(string, string, vector <int>, int);
  studentas(const studentas&);
//destruktorius
  ~studentas();
//getteriai
  const string get_vardas();
  const string get_pavarde();
  const vector <int> get_nd();
  const int get_egz();
//metodai
  studentas& operator=(const studentas& );
  void stud_edit(string, string, vector<int>, int);
};

void studentas::vardas(std::string temp) {vardas_ = temp;}
void studentas::pavarde(std::string temp) {pavarde_ = temp;}
void studentas::nd(vector <int> temp) {nd_ = temp;}
void studentas::egz(int temp) {egz_ = temp;}

//studentas::studentas():vardas_{" "}, pavarde_{" "}, nd_{}, egz_{}{}
studentas::studentas() {
  vardas(" ");
  pavarde(" ");
  nd({0});
  egz(0);
}

studentas::studentas(string v, string p, vector <int> a, int e) {
  vardas(v);
  pavarde(p);
  nd(a);
  egz(e);
}

studentas::studentas(const studentas &temp) {
  this->vardas(temp.vardas_);
  this->pavarde(temp.pavarde_);
  this->nd(temp.nd_);
  this->egz(temp.egz_);
}

studentas::~studentas(){vardas_=""; pavarde_=""; nd_.clear();}

const string studentas::get_vardas() {
  return vardas_;
}
const string studentas::get_pavarde() {
  return pavarde_;
}
const vector <int> studentas::get_nd() {
  return nd_;
}
const int studentas::get_egz() {
  return egz_;
}

//metodai
studentas& studentas::operator=(const studentas &kint) {
  if (this != &kint) {
    vardas_ = kint.vardas_;
    pavarde_ = kint.pavarde_;
    nd_ = kint.nd_;
    egz_ = kint.egz_;
  }
  return *this;
}

void studentas::stud_edit(string v, string p, vector <int> a, int e) {
  vardas(v);
  pavarde(p);
  nd(a);
  egz(e);
}