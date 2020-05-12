#include <iostream>

using namespace std;
string imie,nazwisko,klasa;
int numer;
string imien,nazwiskon,klasan,przedmiot;

 class uczeniowie
 {
    public:
       Zwierze()
       { }
 
       void wprowadzucz( )
       {
              cout << "podaj imie ucznia: ";
              cin>>imie;
              cout << "podaj nazwisko ucznia: ";
              cin>>nazwisko;
              cout << "podaj numer ucznia: " ;
              cin>>numer;
              cout << "podaj klase ucznia: " ;
              cin>>klasa;

       }
 
       void wypiszucz( )
       {
              cout << imie << " " << nazwisko << " " << numer << " "<< klasa << endl;
       }
 
 };
 
 class nauczyciele : public uczeniowie
 {
    public:
      nauczyciele()
      { }
 
      void wprowadznaucz()
      {
              cout << "podaj imie nauczyciela: " ;
              cin>>imien;
              cout << "podaj nazwisko nauczyciela: ";
              cin>>nazwiskon;
              cout << "podaj klase: " ;
              cin>>klasan;
              cout << "podaj przedmiot: " ;
              cin>>przedmiot;
      }
 
      void wypisznaucz()
      {
              cout << imien << " " << nazwiskon << " " << klasan << " " <<przedmiot;
      }
 };



int main(int argc, char** argv) {
	    nauczyciele n;
    n.wprowadzucz();
    n.wprowadznaucz();
    n.wypiszucz();
    n.wypisznaucz();
    return 0;
	return 0;
}
