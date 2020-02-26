#include <iostream>
#include <fstream>
using namespace std;
int main()
{
 char c;
 ifstream tiedosto;
 tiedosto.open("c:\\Koulu\\nimi.txt");
 while ((c=tiedosto.get())!=EOF)
 {
 cout << c;
 }
 tiedosto.close();
 cout << endl;
 cout << "Luettiin tekstitiedosto 'nimi' sisalto kansiosta 'Koulu' "<< endl;
 return 0;
}
