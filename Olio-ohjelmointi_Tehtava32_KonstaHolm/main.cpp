#include <iostream>
#include <fstream>
using namespace std;

int main()
{

 ofstream tiedosto;

 tiedosto.open("c:\\Koulu\\nimi.txt");
 if(tiedosto.is_open())
 {
 tiedosto << "Konsta Holm";
 }
 tiedosto.close();

 cout << "Kirjoitin tekijan nimen tekstitiedostoon C-levylla 'Koulu' nimisessa kansiossa" << endl;

 ofstream tiedosto2;

 cout << "Voit nyt kirjoittaa oman nimesi ja painaa ctrl+z ja entteria: " << endl;
 char c;
 tiedosto2.open("c:\\Koulu\\nimi2.txt");
 if(tiedosto2.is_open())
 {
    while((c=cin.get())!=EOF)
    {
        tiedosto2 << c;
    }
 }
 tiedosto2.close();
 cout << "Kirjoitin nimesi tiedostoon nimelta nimi2 joka on samassa paikassa tiedoston 'nimi' kanssa" << endl;

 return 0;
}
