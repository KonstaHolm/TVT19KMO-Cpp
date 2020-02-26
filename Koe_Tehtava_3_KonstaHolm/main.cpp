#include <iostream>
#include <fstream>
using namespace std;
int main()
{
 char c;
 int pisteet = 0;
 int pilkut = 0;
 int huutomerkit = 0;
 int kysymysmerkit = 0;
 ifstream tiedosto;
 tiedosto.open("c:\\Koulu\\testi.txt");
 while ((c=tiedosto.get())!=EOF)
 {
     if (c == '.') {
         pisteet++;
     }
     if (c == ',') {
         pilkut++;
     }
     if (c == '!') {
         huutomerkit++;
     }
     if (c == '?') {
         kysymysmerkit++;
     }

 cout << c;
 }
 tiedosto.close();
 cout << endl;
 cout << "Luettiin tekstitiedosto 'testi' sisalto kansiosta 'Koulu' "<< endl;
 cout << endl;
 cout << "Pisteita: " << pisteet << endl;
 cout << "Pilkkuja: " << pilkut << endl;
 cout << "Huutomerkkeja: " << huutomerkit << endl;
 cout << "Kysymysmerkit: " << kysymysmerkit << endl;

 //Pisteitä 7, pilkkuja 17, muita 0.

 return 0;
}
